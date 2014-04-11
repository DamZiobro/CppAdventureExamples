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

using namespace std;

class ThreadClass {
public:
    ThreadClass (){}
    virtual ~ThreadClass (){}

    void operator()(int& value) const {
        //IIIa - invoke increamenting loop inside second thread
        for (int i=1; i<10000000;i++) {
            //IVa  
            value = value + 1;
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
    //I - initialize object shared between threads 
    int intValue = 0;

    //II - pass shared objects to thread function by reference
    std::thread myThread((ThreadClass()), std::ref(intValue));

    //III - invoke increamenting loop inside main thread 
    for (int i=0; i<1000000;i++) {
        //IV
        intValue = intValue + 1;
    }

    myThread.join(); 

    cout << "Final intValue: " << intValue << endl;

    return 0;
}


