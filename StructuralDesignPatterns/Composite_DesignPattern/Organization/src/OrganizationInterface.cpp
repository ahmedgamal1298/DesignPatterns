#include "../inc/OrganizationInterface.h"



OrganizationInterface::OrganizationInterface(std::string PassedName) :name(PassedName){}
void OrganizationInterface::Add(std::shared_ptr<OrganizationInterface> unit) {
	std::cout << "Cannot add to a leaf" << std::endl;
}
void OrganizationInterface::Remove(std::shared_ptr<OrganizationInterface> unit) {
	std::cout << "Cannot Remove to a leaf" << std::endl;
}
const std::string OrganizationInterface::GetName()const {
	return name;
}

std::ostream& operator<<(std::ostream& os, OrganizationInterface& unit) {
	unit.Display(os);
	return os;
}