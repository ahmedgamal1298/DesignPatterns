// StaticDecorator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include <string>
#include "../inc/SimpleCoffee.h"
#include "../inc/MilkDecorator.h"
#include "../inc/SugarDecorator.h"
#include "../inc/CaramelDecorator.h"
using std::unique_ptr;
using std::string;
using std::cout;
int main()
{
    
    SimpleCoffee Coffee;
	cout << Coffee.getDescription() << " : " << Coffee.getCost() << "\n";
    MilkDecorator<SimpleCoffee> MilkeCoffee;
	cout << MilkeCoffee.getDescription() << " : " << MilkeCoffee.getCost() << "\n";
    SugarDecorator<MilkDecorator<SimpleCoffee>> SugarMilkeCoffee;
	cout << SugarMilkeCoffee.getDescription() << " : " << SugarMilkeCoffee.getCost() << "\n";
    CaramelDecorator<SugarDecorator<MilkDecorator<SimpleCoffee>>> CaramelSugarMilkeCoffee;
	cout << CaramelSugarMilkeCoffee.getDescription() << " : " << CaramelSugarMilkeCoffee.getCost() << "\n";

}

