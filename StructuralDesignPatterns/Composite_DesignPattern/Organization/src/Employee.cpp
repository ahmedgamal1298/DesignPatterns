#include "../inc/Employee.h"

Employee::Employee(std::string EmployeeName, std::string position, double salary) {
	PrivateInfo.EmployeeName = EmployeeName;
	PrivateInfo.position = position;
	PrivateInfo.salary = salary;

}
double Employee::getSalary() const {
	return PrivateInfo.salary ;
}
void Employee::Display(std::ostream& os)const {
	os << "Name: " << PrivateInfo.EmployeeName << ", Position: " << PrivateInfo.position << ", Salary: " << PrivateInfo.salary << std::endl;
}
const Info& Employee::getInfo() const {
	return PrivateInfo;
}