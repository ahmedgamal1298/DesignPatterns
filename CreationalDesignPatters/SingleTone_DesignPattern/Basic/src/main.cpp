// Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../inc/Basic.h"   

int main()
{
    Basic* instance1 = Basic::GetInstance();
    Basic* instance2 = Basic::GetInstance();

    if (instance1 == instance2) {
        std::cout << "Both instances are the same\n";
    }

    Basic::DestroyInstance();
    return 0;
}

