// Protection_Proxy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../inc/ProxyRepo.h"
using std::cout;

int main()
{

	try {
		ProxyRepo repo{ R"(./)" };
		repo.SetGroupOfAuthorizedList({ "Manager", "Architect" });
		Employee e1{ "Umar", "Manager" };
		Employee e2{ "Ayaan", "Programmer" };
		Employee e3{ "Raihaan", "Architect" };

		repo.GetRepo()->SetUser(&e3);
		//repo.CreateFile("data.txt");

		//repo.UpdateFile("data.txt");
		//repo.DeleteFile("data.txt");
		repo.ViewFile("data.txt");
	}
	catch (std::exception& ex) {
		std::cout << "[Exception]" << ex.what() << std::endl;
	}
}


