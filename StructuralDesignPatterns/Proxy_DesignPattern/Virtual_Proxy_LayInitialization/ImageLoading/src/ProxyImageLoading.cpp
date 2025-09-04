#include "../inc/ProxyImageLoading.h"

void ProxyImageLoading::Load(string m_file)
{
	if (!IsCreated)
	{
		IsCreated = true;
		if (m_file != "None")
		{
			this->file = m_file;
			realImage = make_unique<RealImage>(file);
		}
		else
			realImage = make_unique<RealImage>(this->file);
		cout<< "Loading image from disk: " << file <<endl;
		std::this_thread::sleep_for(std::chrono::seconds(3));
	}
}

void ProxyImageLoading::Display(string m_file)
{
	if (m_file != "None" || this->file != "None")
	{

		Load(m_file);
		realImage->Display();
	}
	else
		cout << "No image file specified." << endl;
}
