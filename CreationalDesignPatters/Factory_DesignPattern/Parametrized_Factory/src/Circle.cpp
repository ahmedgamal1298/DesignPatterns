#include "../inc/Circle.h"

Circle::Circle(double Passedradius) :
	radius(Passedradius) {
}

void Circle::draw() const {
	std::cout << "Drawing a Circle of color: " << color << std::endl;
}

double Circle::area() const {
	return 3.14 * radius * radius;
}

std::string Circle::getType() const {
	return "Circle";
}

// Common functionality
void Circle::setColor(const std::string& color) {
	this->color = color;
}

std::string Circle::getColor() const {
	return this->color;
}
