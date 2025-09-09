#pragma once
#include "../inc/InputStream.h"
#include <fstream>
class FileInputStream :
    public InputStream
{
    std::ifstream m_Reader;
public:
    FileInputStream(const string& FileName="None");
    virtual void Read(string& text)override;
    virtual void Close() override;
	virtual~FileInputStream() = default;
};

