#pragma once
#include "../inc/OutputStream.h"
#include <fstream>
class FileOutputStream :
    public OutputStream
{
	std::ofstream m_Writer;
public:
	FileOutputStream(const string& FileName="None");
	virtual void Write(const std::string& text)override;
	virtual void Close()override;
	virtual ~FileOutputStream() = default;
};

