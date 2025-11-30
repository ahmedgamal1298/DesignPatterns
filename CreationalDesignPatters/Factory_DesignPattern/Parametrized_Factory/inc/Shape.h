#pragma once
#include <string>
#include <iostream>
class Shape
{
protected:
    std::string color = "black";
public:
    Shape() = default;
    
    virtual void draw() const = 0;
    virtual double area() const = 0;
    virtual std::string getType() const = 0;

    // Common functionality
    virtual void setColor(const std::string& color);

    virtual std::string getColor() const;

    virtual ~Shape() = default;
};





