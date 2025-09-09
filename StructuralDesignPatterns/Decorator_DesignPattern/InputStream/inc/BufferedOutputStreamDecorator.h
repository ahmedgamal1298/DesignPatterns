#pragma once
#include "../inc/OutputSreamDecorator.h"
class BufferedOutputStreamDecorator :
    public OutputSreamDecorator
{
	using OutputSreamDecorator::OutputSreamDecorator;
	string m_buffer[500];
public:
	virtual void Write(const std::string& text)override;
	virtual void Close()override;
	virtual ~BufferedOutputStreamDecorator() = default;
};

