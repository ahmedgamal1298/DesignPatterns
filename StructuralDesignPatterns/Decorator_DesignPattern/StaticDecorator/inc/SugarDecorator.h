#pragma once
#include "../inc/SimpleCoffee.h"
#include <string>
#include <utility>
using std::string;
template <class T>
class SugarDecorator : public T
{
public:
    template<typename...Args>
    SugarDecorator(Args&&...args) :T(std::forward<Args>(args)...){}

	double getCost() const {
		return T::getCost() + 0.5;
	}
	string getDescription() const {

		return T::getDescription() + ", Sugar";
	}
};

