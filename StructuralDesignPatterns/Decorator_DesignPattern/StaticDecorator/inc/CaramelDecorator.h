#pragma once
#include <string>
#include "../inc/SimpleCoffee.h"
using std::string;
template<class T>
class CaramelDecorator :
    public T
{
public:
    template<typename ...Args>
    CaramelDecorator(Args&&...args) :T(std::forward<Args>(args)...){}

    double getCost() const {
        return T::getCost() + 2;
    }

    string getDescription() const {

        return T::getDescription() + ", Caramel";
    }
};

