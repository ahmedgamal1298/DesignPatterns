#pragma once
#include <vector>
#include <memory>
#include <string>
#include <iostream>
class OrganizationInterface
{
protected:
	std::string name;
	
	
public:
	OrganizationInterface(std::string PassedName="None");
	virtual void Add(std::shared_ptr<OrganizationInterface> unit);
	virtual void Remove(std::shared_ptr<OrganizationInterface> unit);
	const std::string GetName()const;
	virtual double getSalary() const = 0;
	virtual void Display(std::ostream& os)const=0;
	friend std::ostream& operator<<(std::ostream& os, OrganizationInterface& unit);
	virtual ~OrganizationInterface() = default;
};

