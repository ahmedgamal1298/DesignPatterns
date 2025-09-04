#include "../inc/RealImage.h"




void RealImage::Display(string m_file ) {
	if(m_file != "None")
		cout << "Displaying image from disk: " << m_file << endl;
	else
		cout << "Displaying image from disk: " << this->ImageFile << endl;
	std::this_thread::sleep_for(std::chrono::seconds(1));
}