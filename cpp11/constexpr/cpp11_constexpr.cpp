/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-01-27 12:04 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>

using namespace std;

//II - constrexpr function 
constexpr int return_three()
{
   return 3; 
}

//V - user-defined type having constexpr constructor
class MyClass {
public:
    //constexpr constructor - have to have empty body
    constexpr MyClass () {};
    virtual ~MyClass ();
};


int main(int argc, const char **argv)
{

    //I - declaration of array using constexpr
    int arrayOfInts[return_three() + 5]; //ill-formed for C++03 - proper for C++11 if constexpr

    for (int i = 0; i < return_three()+5; ++i) {
        arrayOfInts[i] = i;
        cout << "arraysOfInts[" << i <<"]: " << i << endl;
    }

    //III - declare variable as const expression 
    constexpr int minutesInHour = 60;

    //IV - declare variable based on user-defined type having constexpr constructor
    constexpr MyClass myClassObject();

    return 0;
}


