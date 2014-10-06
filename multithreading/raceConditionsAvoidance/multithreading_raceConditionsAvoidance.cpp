/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-04-11 15:29 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

//I - Declare mutex 
std::mutex increment_mutex;

class ThreadClass {
public:
    ThreadClass (){}
    virtual ~ThreadClass (){}

    void operator()(int& value) const {
        for (int i=0; i<1000000;i++) {
            //II - using lock/unlock mutex + using lock_guard
            //increment_mutex.lock();
            //IIa - using lock_quard to apply RAII idiom for mutex
            std::lock_guard<std::mutex> lock(increment_mutex);
            value = value + 1;
            //increment_mutex.unlock();
        }
    }
};

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    int intValue = 0;

    std::thread myThread((ThreadClass()), std::ref(intValue));

    for (int i=0; i<1000000;i++) {
        //III - using lock/unlock mutex
        //increment_mutex.lock();
        //IIIa - using lock_guard()
        std::lock_guard<std::mutex> lock(increment_mutex);
        intValue = intValue + 1;
        //increment_mutex.unlock();
    }

    myThread.join(); 

    cout << "Final intValue: " << intValue << endl;

    return 0;
}


