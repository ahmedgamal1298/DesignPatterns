#pragma once
#include "../inc/Input.h"
#include "../inc/Accelerometer.h"
class AccelAdapter :
    public Input
{
	Accelerometer Adaptee;
public:
    virtual bool Up()override;
	virtual bool Down()override;
	virtual bool Left()override;
	virtual bool Right()override;
};

