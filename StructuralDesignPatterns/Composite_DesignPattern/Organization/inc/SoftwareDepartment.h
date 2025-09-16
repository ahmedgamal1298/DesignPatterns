#pragma once
#include "../inc/OrganizationInterface.h"
#include <algorithm>
class SoftwareDepartment :
    public OrganizationInterface
{
private:
    std::vector<std::shared_ptr<OrganizationInterface>> Employees;
    public:
    SoftwareDepartment(std::string PassedName);
    void Add(std::shared_ptr<OrganizationInterface> unit) override;
    void Remove(std::shared_ptr<OrganizationInterface> unit) override;
    double getSalary() const override;
    void Display(std::ostream& os)const override;
	~SoftwareDepartment() = default;
};

