#pragma once
#include "../inc/Component.h"
class ConcreteComponent :
    public Component
{
public:
	virtual void Operation() override;
	virtual ~ConcreteComponent() = default;
};

