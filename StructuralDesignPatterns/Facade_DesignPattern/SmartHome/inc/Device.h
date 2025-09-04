#pragma once
class Device
{
public:
	virtual void TurnOn() = 0;
	virtual void TurnOff() = 0;
	virtual void VolumUp(int level)=0;
	virtual void VolumDown(int level) = 0;


	virtual~Device()=default;
};

