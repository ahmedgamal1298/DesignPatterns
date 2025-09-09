#pragma once
#include "../inc/OutputStream.h"
#include <memory>
using std::unique_ptr;
class OutputSreamDecorator :
    public OutputStream
{

protected:
	unique_ptr<OutputStream>stream;
public:
	OutputSreamDecorator(unique_ptr<OutputStream>ptr);
	virtual void Write(const std::string& text) = 0;
	virtual void Close() = 0;
	virtual ~OutputSreamDecorator() = default;
};

