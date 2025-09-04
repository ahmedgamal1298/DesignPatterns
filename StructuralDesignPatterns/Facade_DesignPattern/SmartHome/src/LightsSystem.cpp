#include "../inc/LightsSystem.h"

#include <iostream>
using std::cout;
using std::endl;
void LightsSystem::TurnOff() {
	cout << "LightsSystem is Turned Off" << endl;
}

void LightsSystem::TurnOn() {
	cout << "LightsSystem is Turned On" << endl;
}

void LightsSystem::VolumUp(int level) {
	if (level <= 100 && ((LightLevel + level) <= 100))
	{
		LightLevel += level;
		cout << "LightsSystem Level is " << LightLevel << endl;
	}
	else if (level > 100 || LightLevel == 100)
	{
		LightLevel = 100;
		cout << "LightsSystem is at Max level" << endl;
	}
}

void LightsSystem::VolumDown(int level) {
	if (level <= 100 && ((LightLevel - level) >= 0))
	{
		LightLevel -= level;
		cout << "LightsSystem Level is " << LightLevel << endl;
	}
	else if (level > 100 || LightLevel == 0)
	{
		LightLevel = 0;
		cout << "LightsSystem is Off" << endl;
	}
}
