#include "../inc/Shape.h"


void Shape::setColor(const std::string& color) {
    this->color = color;
}

 std::string Shape::getColor() const {
    return color;
}
