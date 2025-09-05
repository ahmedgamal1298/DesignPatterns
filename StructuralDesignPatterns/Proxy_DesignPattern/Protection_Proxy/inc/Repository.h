#pragma once
#include "../inc/Storage.h"
#include "../inc/Employee.h"
#include <fstream>
#include <iostream>
#include <filesystem>
using namespace std::filesystem;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::getline;

class Repository :
    public Storage
{
	friend class ProxyRepo;
	Employee* CurrentUser;
	std::filesystem::path m_CurrentPath{};
	virtual void CreateFile(const string& FileName) override;
	virtual void DeleteFile(const string& FileName) override;
	virtual void UpdateFile(const string& FileName) override;
	virtual void ViewFile(const string& FileName) override;
public:
	Repository(std::string& repoPath);
	Employee* GetUser()const;
	void SetUser(Employee* emp);
	virtual ~Repository() = default;
};

