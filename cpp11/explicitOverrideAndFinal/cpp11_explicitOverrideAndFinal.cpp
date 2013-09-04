/*
 * =====================================================================================
 *
 *       Filename:  explicitOverrideAndFinal.cpp
 *
 *    Description:  Example of usage 'Explicit override and Final' feauture of
 *                  C++11
 *
 *        Version:  1.0
 *        Created:  02/09/13 11:18:52
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Damian Ziobro, ziobro.damian@gmail.com
 *
 *        Company:  XMementoIT Limited (info@xmementoit.com)
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;


class base {
public:
    virtual void override_func(int a){ cout << "base: override_func()" << endl;}
    virtual void final_func() final {cout << "base: final_func" << endl;}
};

//final class
class derived1 final : public base {
public:
    //UNCOMMENT 1: override keyword and you will see compile error because of
    //impossible explicitely overriding function having int parameter by
    //function having double parameter
    virtual void override_func(double a) /* override  */{ cout << "derived1: override_func()" << endl;}

    //UNCOMMENT 2: AND YOU WILL SEE COMPILE ERROR BECAUSE OF OVERRIDING FINAL FUNCTION
    //virtual void final_func() { cout << "derived1: final_func()" << endl; } // ill-form - trying to override final function
};


//UNCOMMENT 3: AND YOU WILL SEE COMPILE ERROR BECAUSE OF INHERITING FROM FINAL CLASS
//class derived2 : public derived1 { //error - we would like to inherit from final class
//};

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char *argv[])
{
    base base_test;
    base_test.override_func(0);
    base_test.final_func();

    derived1 derived1_test;
    derived1_test.override_func(0);
    derived1_test.final_func();

    return 0;
}
