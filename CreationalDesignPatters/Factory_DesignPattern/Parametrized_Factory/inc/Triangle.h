#pragma once
#include "Shape.h"

class Triangle : public Shape
{
    double base;
    double height;
    
public:
    Triangle(double PassedBase = 0.0, double PassedHeight = 0.0);
    virtual void draw() const override;
    virtual double area() const override;
    virtual std::string getType() const override;

    // Common functionality
    virtual void setColor(const std::string& color) override;
    virtual std::string getColor() const override;

    virtual ~Triangle() = default;
};

