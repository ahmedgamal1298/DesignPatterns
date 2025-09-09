#pragma once
#include <string>
using std::string;
class InputStream
{
public:
	virtual void Read(string &text)=0;
	virtual void Close() = 0;
	virtual ~InputStream() = default;
};

