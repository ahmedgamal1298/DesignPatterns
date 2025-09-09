#pragma once
#include "../inc/InputStream.h"
#include <memory>
using std::unique_ptr;
class InputStreamDecorator :
    public InputStream
{
protected:
	unique_ptr<InputStream> m_stream;
public:
	InputStreamDecorator(unique_ptr<InputStream>ptr);
	virtual void Read(string& text) = 0;
	virtual void Close() = 0;
	virtual ~InputStreamDecorator() = default;
};

