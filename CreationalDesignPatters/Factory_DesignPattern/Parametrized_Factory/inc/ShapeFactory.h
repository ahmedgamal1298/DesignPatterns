#pragma once
#include <memory>
#include <string>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"	
#include "Triangle.h"

class ShapeFactory
{
public:
	enum ShapeTypes
	{
		CIRCLE,
		RECTANGLE,
		TRIANGLE
	};

	// Overload for 1 parameter (Circle)
	static std::unique_ptr<Shape> CreateShape(const ShapeTypes& shapeType, double param1) {
		if (shapeType == ShapeTypes::CIRCLE) {
			return std::make_unique<Circle>(param1);
		}
		return nullptr;
	}

	// Overload for 2 parameters (Rectangle, Triangle)
	static std::unique_ptr<Shape> CreateShape(const ShapeTypes& shapeType, double param1, double param2) {
		if (shapeType == ShapeTypes::RECTANGLE) {
			return std::make_unique<Rectangle>(param1, param2);
		}
		else if (shapeType == ShapeTypes::TRIANGLE) {
			return std::make_unique<Triangle>(param1, param2);
		}
		return nullptr;
	}
};


