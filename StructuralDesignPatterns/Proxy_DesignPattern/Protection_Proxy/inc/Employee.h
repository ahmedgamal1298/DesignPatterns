#pragma once
#include <string>
using std::string;
class Employee
{
	string Name;
	string Role;
public:
	Employee(string Name, string role) :Name(Name), Role(role) {}

	string GetName() const;
	string GetRole() const;
	string GetInfo() const;
};

