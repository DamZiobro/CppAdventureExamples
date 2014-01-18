/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-01-18 13:46 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <QList>

using namespace std;

class MyClass {
    public:
        MyClass () { cout << "MyClass constructor: " << endl;}
        MyClass (const MyClass& rhs) { cout << "Copy constructor" << endl;}
        MyClass& operator=(const MyClass& rhs) { cout << "Copy assignment operator" << endl; return *this;}
        ~MyClass () { cout << "MyClass destructor" << endl;}
        void getValue() const { cout << "value0" << endl; };
};

 //======= Function ==================================================
   //Name: main
   //Description: main entry Function
 //=================================================================== 
int main(int argc, const char **argv)
{
    //I - fulfilling list of of MyClass objects
    cout << "===== Construction myClasses list on application start ====" << endl;
    QList<MyClass> myClasses; 
    for (int i = 0; i < 3; ++i) {
        myClasses.append(MyClass());
    }

    //II - using foreach with passing-by-value
    cout << "======== Using QT foreach with passing-by-value: ======" << endl;
    foreach(MyClass myClass, myClasses){
        myClass.getValue();
    }

    //III - using foreach with passing-by-const-reference
    cout << "===== Using QT foreach with passing-by-const reference: ====="<< endl;
    foreach(const MyClass& myClass, myClasses){
        myClass.getValue();
    }

    cout << "===== Destructing myClasses list on application exit ====" << endl;

    return 0;
}


