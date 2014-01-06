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

using namespace std;

//Ia - function which will be invoked parallelly
void print()
{
    for (int i = 0; i < 5; ++i) {
        cout << "Thread second value: " << i << endl;
    }
}

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - creating second thread
    std::thread thread1(print);

    //II - printing 
    for (int i = 0; i < 5; ++i) {
        cout << "Thread main value: " << i << endl;
    }

    //III - wait for thread1 function to finish
    thread1.join();

    //IV - detach thread from current application 
    //(thread will properly finish separate to main application) - deamon process
    //thread1.detach();
    return 0;
}


