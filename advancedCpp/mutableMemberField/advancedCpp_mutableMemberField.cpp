/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-03-21 16:16 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>

using namespace std;

class TestClass {
public:
    TestClass () : constInt(5), nonConstInt(10), mutableConstInt(3){};
    virtual ~TestClass () {};

    //Ia - definitaion different modified fields (including mutable field)
    const int constInt;
    mutable int mutableConstInt;
    int nonConstInt;

    //IIa - All function should be const if you would like to use it for const object
    void printInts() const {
        cout << "constInt: " << constInt << endl;
        cout << "mutableConstInt: " << mutableConstInt << endl;
        cout << "nonConstInt: " << nonConstInt << endl;
    }
};

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - define testObject as const object 
    const TestClass testObject;

    //II - print default values of testObject
    cout << "=====> Default values: " << endl;
    testObject.printInts();
           
    //III - try to modified different fields of testObject 
    testObject.constInt = 100; //illegal - testObject is const 
    testObject.nonConstInt = 200; //illegal - testObject is const 
    testObject.mutableConstInt = 300; //legal despite that testObject is const 

    //IV - print testObject's values after modifiation 
    cout << "=====> Modified values: " << endl;
    testObject.printInts(); 
    return 0;
}


