#pragma once
#include "Device.h"
class Tv :
    public Device
{
public:
	inline static int TvVolume = 0;
    virtual void TurnOn()override;
	virtual void TurnOff()override;
	virtual void VolumUp(int level)override;
	virtual void VolumDown(int level)override;
	virtual~Tv() = default;
};

