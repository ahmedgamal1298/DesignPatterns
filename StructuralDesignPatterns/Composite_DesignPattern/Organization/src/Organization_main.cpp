// Organization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "../inc/Employee.h"
#include "../inc/SoftwareDepartment.h"
#include <iostream>


int main()
{
	std::shared_ptr<OrganizationInterface> emp1 = std::make_shared<Employee>("Alice", "BackEndDeveloper", 70000);
	std::shared_ptr<OrganizationInterface> emp2 = std::make_shared<Employee>("Sam", "FrontEndDeveloper", 100000);
	std::shared_ptr<OrganizationInterface> emp3 = std::make_shared<Employee>("Gamal", "EmbeddedSoftwareDeveloper", 100000);

	std::unique_ptr<OrganizationInterface> SoftwareDept = std::make_unique<SoftwareDepartment>("Software Department");

	SoftwareDept->Add(emp1);
	SoftwareDept->Add(emp2);
	SoftwareDept->Add(emp3);
	std::cout << *SoftwareDept;
	SoftwareDept->Remove(std::shared_ptr<OrganizationInterface>(emp3));
	std::cout << *SoftwareDept;
	// Memory leak detection 
	_CrtDumpMemoryLeaks();
}


