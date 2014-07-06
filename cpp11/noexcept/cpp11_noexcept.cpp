/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-07-06 16:05 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>

using namespace std;

//I - Definition of noexcept function 
void testFunction() noexcept
{
    cout << "This function should be throw because is specified as noexcept" << endl;
    //...However we are throwing to check what happens 
    throw ("Test throw from noexcept function");
    cout << "Finsing testFunction()" << endl;
}

//II - terminate function 
void terminateFunction()
{
    cout << "Terminating using std::terminate() assigned function" << endl;
}

int main(int argc, const char **argv)
{
    //III - setting terminateFunction to std::terminate()
    std::set_terminate(&terminateFunction);

    //IV - running noexcept test function which however throw
    //it will run std::terminate function()
    testFunction();
    return 0;
}


