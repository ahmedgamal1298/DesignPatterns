// Parametrized_Factory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "../inc/ShapeFactory.h"
int main()
{

	ShapeFactory shapeFactory;
	std::unique_ptr<Shape> circle = shapeFactory.CreateShape(ShapeFactory::CIRCLE, 5.0);
	circle->setColor("red");
	circle->draw();
	std::cout << "Area of the circle: " << circle->area() << std::endl;
	std::unique_ptr<Shape> rectangle = shapeFactory.CreateShape(ShapeFactory::RECTANGLE, 4.0, 6.0);
	

	rectangle->setColor("blue");
	rectangle->draw();
	std::cout << "Area of the rectangle: " << rectangle->area() << std::endl;
}

