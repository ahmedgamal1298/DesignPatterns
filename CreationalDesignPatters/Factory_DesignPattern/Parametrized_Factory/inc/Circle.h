#pragma once
#include "Shape.h"

class Circle : public Shape
{
    double radius;

public:
    Circle(double radius = 0.0);
    virtual void draw() const override;
    virtual double area() const override;
    virtual std::string getType() const override;

    // Common functionality
    virtual void setColor(const std::string& color) override;
    virtual std::string getColor() const override;

    virtual ~Circle() = default;
};

