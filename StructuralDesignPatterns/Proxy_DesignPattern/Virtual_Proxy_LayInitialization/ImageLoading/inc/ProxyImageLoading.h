#pragma once
#include "../inc/Image.h"
#include "../inc/RealImage.h"
#include <string>
#include <memory>
#include <thread>
#include <iostream>
using std::string;
using std::unique_ptr;
using std::make_unique;
using std::cout;
using std::endl;


class ProxyImageLoading :
    public Image
{
private:
	bool IsCreated;
	string file;
	unique_ptr <Image>realImage = nullptr;
public:
	ProxyImageLoading(string m_file = "None") :file(m_file), IsCreated(false) {}
    void Load(string m_file = "None");
	virtual void Display(string m_file = "None") override;
	virtual ~ProxyImageLoading() {
		std::cout << "ImageProxy for " << file << " destroyed." << std::endl;
	}

};

