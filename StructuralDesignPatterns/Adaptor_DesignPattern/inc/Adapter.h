#pragma once
#include "Target.h"
#include "Adaptee.h"
class Adapter :
    public Target
{
private:
	Adaptee* adaptee = nullptr;
public:
	Adapter(){
		adaptee = new Adaptee();
	}
	virtual ~Adapter() {
		delete adaptee;
	}
	virtual void Request()override;
};

