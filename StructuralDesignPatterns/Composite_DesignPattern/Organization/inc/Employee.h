#pragma once
#include "../inc/OrganizationInterface.h"
typedef struct Info {
	double salary;
	std::string EmployeeName;
	std::string position;
}Info;
class Employee :
    public OrganizationInterface
{
	Info PrivateInfo;
public:
	Employee(std::string EmployeeName, std::string position, double salary);
	virtual double getSalary() const override;
	virtual void Display(std::ostream& os)const override;
	const Info& getInfo() const;
	virtual ~Employee() = default;
};

