// Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "../inc/Basic.h"   

int main()
{
    std::thread t1{ []() {
          Basic* instance1 = Basic::GetInstance();
          }
    };
    std::thread t2{ []()
    {
        Basic* instance2 = Basic::GetInstance();
    } };
    t1.join();
    t2.join();

    Basic::DestroyInstance();
    return 0;
}

