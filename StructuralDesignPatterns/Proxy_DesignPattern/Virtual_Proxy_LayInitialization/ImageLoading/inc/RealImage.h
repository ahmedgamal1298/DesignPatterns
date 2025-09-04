#pragma once
#include <string>
#include "../inc/Image.h"
#include <string>
#include <memory>
#include <thread>
#include <iostream>
using std::string;
using std::unique_ptr;
using std::make_unique;
using std::cout;
using std::endl;
class RealImage :

    public Image
{
private:
    std::string ImageFile{};
public:
    RealImage(std::string PassedImagefile):ImageFile(PassedImagefile)
    {
      
	}
    
	virtual void Display(string m_file = "None") override;
    virtual ~RealImage() = default;
};

