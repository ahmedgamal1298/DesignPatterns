// Decorator_BasicExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "../inc/ConcreteComponent.h"
#include "../inc/ConcreteDecoratorA.h"
#include "../inc/ConcreteDecoratorB.h"
int main()
{
    std::unique_ptr<Component>ComponentPtr {new ConcreteComponent ()};
	std::unique_ptr<ConcreteDecoratorA> DecA {new ConcreteDecoratorA(std::move(ComponentPtr))};
	std::unique_ptr<ConcreteDecoratorB>  DecB { new ConcreteDecoratorB(std::move(DecA)) };
	DecB->Operation();
	return 0;
}

