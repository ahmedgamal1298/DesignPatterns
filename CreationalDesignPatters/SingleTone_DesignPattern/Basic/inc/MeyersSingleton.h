#pragma once
#include <iostream>

class MeyersSingleton
{
	MeyersSingleton() = default;
	~MeyersSingleton() {
		std::cout << __FUNCSIG__ << std::endl;

		std::cout << "MeyersSingleton destroyed\n";
	}
	// Delete copy constructor and assignment operator
	MeyersSingleton(const MeyersSingleton&) = delete;
	MeyersSingleton& operator=(const MeyersSingleton&) = delete;
public:
	static MeyersSingleton& GetInstance();

};

