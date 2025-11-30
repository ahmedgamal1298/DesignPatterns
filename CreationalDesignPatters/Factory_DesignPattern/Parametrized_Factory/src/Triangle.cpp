#include "../inc/Triangle.h"

Triangle::Triangle(double PassedBase, double PassedHeight) :base(PassedBase), height(PassedHeight) {}
void Triangle::draw() const {
	std::cout << "Drawing a Triangle of color: " << color << std::endl;
}
double Triangle::area() const {
	return 0.5 * base * height;
}
std::string Triangle::getType() const {
	return "Triangle";
}
// Common functionality	
void Triangle::setColor(const std::string& color) {
	this->color = color;
}
std::string Triangle::getColor() const {
	return this->color;
}

