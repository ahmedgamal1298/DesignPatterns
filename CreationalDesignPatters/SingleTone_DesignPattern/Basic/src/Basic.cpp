#include "../inc/Basic.h"



Basic* Basic::GetInstance() {
	
	std::cout << __FUNCSIG__ << std::endl;
	Basic* temp = m_instance.load(std::memory_order_acquire);
	//Double-check pattern to avoid locking every time after the instance is created
	if (temp == nullptr)
	{
		std::lock_guard<std::mutex> lock(mutex_m);
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
