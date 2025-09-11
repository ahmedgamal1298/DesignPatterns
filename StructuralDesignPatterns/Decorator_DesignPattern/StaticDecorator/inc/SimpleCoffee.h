#pragma once
#include "../inc/BaseCoffee.h"
class SimpleCoffee : 
    public BaseCoffee
{
public:
    double getCost() const;
    string getDescription() const;
};

