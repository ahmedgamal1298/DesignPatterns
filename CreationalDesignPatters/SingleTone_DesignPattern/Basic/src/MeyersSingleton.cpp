#include "../inc/MeyersSingleton.h"


MeyersSingleton& MeyersSingleton::GetInstance()
{
	// for C++ static local variable initialization is thread-safe
	static MeyersSingleton instance;
	return instance;
}