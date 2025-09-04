#pragma once
#include <string>
using std::string;
class Image
{
public:
	virtual void Display(string m_file = "None") = 0;
	virtual ~Image() = default;
};

