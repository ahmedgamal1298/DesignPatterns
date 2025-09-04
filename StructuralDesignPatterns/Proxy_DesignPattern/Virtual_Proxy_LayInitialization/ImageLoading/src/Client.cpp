// ImageLoading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../inc/Image.h"
#include "../inc/ProxyImageLoading.h"
#include <string>   
using std::string;
int main()
{
	string mfile = "Jimmy Image";
    Image* proxy = new ProxyImageLoading(mfile);
	string mfile2 = "Ahmed Image";
	dynamic_cast<ProxyImageLoading*>(proxy)->ChnageImageFile(mfile2);
	proxy->Display();
}

