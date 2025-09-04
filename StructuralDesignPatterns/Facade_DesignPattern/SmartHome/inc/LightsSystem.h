#pragma once
#include "../inc/Device.h"
class LightsSystem :
    public Device
{
	inline static int LightLevel = 0;
	virtual void TurnOn()override;
	virtual void TurnOff()override;
	virtual void VolumUp(int level)override;
	virtual void VolumDown(int level)override;
	virtual~LightsSystem() = default;
};

