#pragma once
#include "../inc/Decorator.h"
#include <iostream>
using std::cout;
class ConcreteDecoratorA :
    public Decorator
{
	// Used to inoke base class constructor
    using Decorator::Decorator;
public:
    virtual void Operation() override;
	virtual ~ConcreteDecoratorA() = default;
};

