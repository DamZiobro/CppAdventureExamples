/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2013-11-20 20:54 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <boost/scoped_ptr.hpp>

using namespace std;
using namespace boost;

class Test {
public:
    Test (string name){
        this->name = name;
        cout << "Constructor of Test class: " << name << endl;
    };
    virtual ~Test (){
        cout << "Destructor of Test class: " << name << endl;
    };

private:
    string name;
};

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - definition of scoped pointer
    scoped_ptr<int> intPtr(new int);
    //Ia - impossible to assign another poiner to value where scoped_ptr has ownership
    //scoped_ptr<int> intSecondPtr(intPtr);

    //II - construction of Test class and assign pointer to that clas
    scoped_ptr<Test> testPtr(new Test("1"));

    //III - two ways of assigning value to smart pointer
    *intPtr = 1;
    cout << "intPtr value: " << *intPtr << endl;
    *intPtr.get()  = 2;
    cout << "intPtr value: " << *intPtr << endl;

    //IV - two ways of assignment values to scoped pointer
    testPtr.reset(new Test("2"));
    cout << "Before exit" << endl;

    //V - freeing memory ownered by testPtr and intPtr (destructing Test 2)
    return 0;
}


