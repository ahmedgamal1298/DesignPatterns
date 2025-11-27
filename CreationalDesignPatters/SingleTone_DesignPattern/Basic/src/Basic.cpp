#include "../inc/Basic.h"



Basic* Basic::GetInstance() {
	
	std::cout << __FUNCSIG__ << std::endl;
	Basic* temp = m_instance.load(std::memory_order_acquire);
	//Double-check pattern to avoid locking every time after the instance is created
	if (temp == nullptr)
	{	
		/* if the next line is not used the sequence will be like that which will cause an issue 
		*	1.	Thread A checks: temp == nullptr 
		*	2.	Thread B checks: temp == nullptr (happens before Thread A finishes)
		*	3.	Thread A starts: temp = new Basic() (takes time to construct)
		*	4.	Thread B also starts: temp = new Basic() (creates a SECOND instance!)
		*	5.	Thread A stores its instance
		*	6.	Thread B stores its instance (overwrites Thread A's pointer memory leak!)
		*/
		std::lock_guard<std::mutex> lock(mutex_m);
		/* if the next line is not used the sequence will be like that which will cause an issue 
		*	Thread A reads temp = nullptr, acquires lock
		*	Thread B reads temp = nullptr, waits for lock
		*	Thread A creates instance and stores it
		*	Thread B acquires lock, but temp is still nullptr (never re-read!)
		*	Thread B creates another instance 
		*/
		temp = m_instance.load(std::memory_order_acquire);
		if (temp == nullptr) {
			temp = new Basic();
			m_instance.store(temp, std::memory_order_release);
		}
	}
	return temp;
}
void Basic::DestroyInstance() {
	std::cout << __FUNCSIG__ << std::endl;
	std::lock_guard<std::mutex> lock(mutex_m);
	Basic* temp = m_instance.exchange(nullptr, std::memory_order_acquire);

	delete temp;
	

}
