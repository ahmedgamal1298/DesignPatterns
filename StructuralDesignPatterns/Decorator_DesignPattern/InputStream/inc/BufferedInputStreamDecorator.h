#pragma once
#include "../inc/InputStreamDecorator.h"
class BufferedInputStreamDecorator :
    public InputStreamDecorator
{
	using InputStreamDecorator::InputStreamDecorator;
	string m_buffer[500];
public:
	virtual void Read(string& text)override;
	virtual void Close()override;
	virtual ~BufferedInputStreamDecorator() = default;
};

