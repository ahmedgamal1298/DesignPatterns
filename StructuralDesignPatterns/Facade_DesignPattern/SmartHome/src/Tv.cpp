#include "../inc/Tv.h"
#include <iostream>
using std::cout;
using std::endl;
void Tv::TurnOff() {
	cout << "Tv is Turned Off" << endl;
}

void Tv::TurnOn() {
	cout << "Tv is Turned On" << endl;
}

void Tv::VolumUp(int level) {
	if (level <= 100 && ( (TvVolume+level) <=100)  )
	{
		TvVolume += level;
		cout << "Tv Volume is " << TvVolume << endl;
	}
	else if (level > 100 || TvVolume == 100)
	{
		TvVolume = 100;
		cout << "Tv Volume is at Max Level" << endl;
	}
}

void Tv::VolumDown(int level) {
	if (level <= 100 && ((TvVolume - level) >=0))
	{
		TvVolume -= level;
		cout << "Tv Volume is " << TvVolume << endl;
	}
	else if (level > 100 || TvVolume == 0)
	{
		TvVolume = 0;
		cout << "Tv is muted" << endl;
	}
}
