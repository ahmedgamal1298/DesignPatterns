#pragma once
#include <string>
using std::string;
class Storage
{
public:
	virtual void CreateFile(const string &FileName)=0;
	virtual void DeleteFile(const string &FileName)=0;
	virtual void UpdateFile(const string &FileName)=0;
	virtual void ViewFile(const string &FileName)=0;
	virtual ~Storage() = default;
};

