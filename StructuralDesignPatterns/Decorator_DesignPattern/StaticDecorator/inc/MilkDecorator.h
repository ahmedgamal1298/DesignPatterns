#pragma once
#include <string>
#include <utility>
#include "../inc/SimpleCoffee.h"
using std::string;
template<class T>
class MilkDecorator : public T
{
public:
	template<typename... Args>
	MilkDecorator(Args&&...args): T(std::forward<Args>(args)...){}

	double getCost() const {
		return T::getCost() + 1.5;
	}

	string getDescription() const {

		return T::getDescription() + ", milk";
	}
};

