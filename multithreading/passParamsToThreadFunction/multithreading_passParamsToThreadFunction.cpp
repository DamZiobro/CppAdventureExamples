/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-01-06 19:38 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

//Ia - function which will be invoked parallelly
void print(int firstParam, string& secondParam)
{
    //IIa - printing in second thread
    for (int i = 0; i < 5; ++i) {
        cout << "Thread second value: " << i << " => firstParam: "<< firstParam <<" secondParam: " << secondParam << endl;
        if(i == 1){
            secondParam.append("_modified");
            firstParam = 20;
        }
    }
}

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - creating params
    int firstParam = 10;
    string secondParam("startSecondParam");

    //II - passing parameters to thread function
    std::thread thread1(print, firstParam, std::ref(secondParam));

    //III - printing in main thread
    for (int i = 0; i < 5; ++i) {
        cout << "Thread main   value: " << i << " => firstParam: "<< firstParam <<" secondParam: " << secondParam << endl;
        //IV - delaying current thread
        if(i == 1){
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }

    //V - wait for thread1 function to finish
    thread1.join();
    return 0;
}


