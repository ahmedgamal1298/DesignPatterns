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
    
    /* Both t1 and t2 start running immediately after creation. 
     * They run in parallel! The join() calls only affect when the main thread continues.
     */

    t1.join();
    // or t1.detach();  // Thread runs independently, main doesn't wait
    t2.join();

    Basic::DestroyInstance();
    return 0;
}

