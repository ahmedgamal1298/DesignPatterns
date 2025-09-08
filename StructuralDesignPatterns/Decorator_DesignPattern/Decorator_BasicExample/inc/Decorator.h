#pragma once
#include "../inc/Component.h"
#include <memory>
#include <algorithm>
class Decorator :
    public Component
{
protected:
    std::unique_ptr<Component> component_;
public:
    Decorator(std::unique_ptr<Component>ptr);
	virtual~Decorator() = default;
};

