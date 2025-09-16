#include "../inc/SoftwareDepartment.h"


SoftwareDepartment::SoftwareDepartment(std::string PassedName) :OrganizationInterface(PassedName){}
void SoftwareDepartment::Add(std::shared_ptr<OrganizationInterface> unit) {
	Employees.emplace_back(unit);
}
void SoftwareDepartment::Remove(std::shared_ptr<OrganizationInterface> unit) {
	auto it = std::find(Employees.begin(), Employees.end(), unit);
	if (it != Employees.end() ) {
		Employees.erase(it);
	}
}
double SoftwareDepartment::getSalary() const {
	double totalSalary = 0.0;
	for (auto& elem : Employees) {
		totalSalary += elem->getSalary();
	}
	return totalSalary;
}
void SoftwareDepartment::Display(std::ostream& os)const {
	for (auto& elem : Employees) {
		 elem->Display(os);
	}
}
