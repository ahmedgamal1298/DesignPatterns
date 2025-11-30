#include "../inc/Rectangle.h"

Rectangle::Rectangle(double PassedWidth, double PassedHeight):width(PassedWidth), height(PassedHeight) { }
void Rectangle::draw() const {
	std::cout << "Drawing a Rectangle of color: " << color << std::endl;
}
double Rectangle::area() const {
	return width * height;

}
std::string Rectangle::getType() const {
	return "Rectangle";
}

// Common functionality
void Rectangle::setColor(const std::string& color) {
	this->color = color;
}

std::string Rectangle::getColor() const {
	return this->color;
}