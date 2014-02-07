/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2014-02-07 15:50 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>

using namespace std;


//II - structure with public fields
struct MyStruct {
    int intValue;
    double doubleValue;    
};

//III - structure with private fields and constructr
class MyClass {
public:
    MyClass(int intValue, double doubleValue) : 
        intValue{intValue}, 
        doubleValue{doubleValue}{}

private:
    int intValue;
    double doubleValue;  

    //gettters and setters
    public: int getIntValue(){ return intValue; }
    public: void setIntValue(int intValue){ this->intValue = intValue;}
    public: double getDoubleValue(){ return doubleValue; }
    public: void setDoubleValue(double doubleValue){ this->doubleValue = doubleValue;}
};

//IV - getting struct using uniform syntax 
MyStruct getMyStruct()
{
   return {4, 2.8}; 
}

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{

    //I - C++11 uniform initialization of class, struct
    MyStruct myStruct{5, 2.1};
    MyClass myClass  {3, 3.4};

    //II - constructing class using getMyStruct() method
    MyStruct mySecondStruct = getMyStruct();

    cout << "myStruct: intValue; " << myStruct.intValue << "; doubleValue: " << myStruct.doubleValue << endl;
    cout << "myClass: intValue: "<< myClass.getIntValue() << "; doubleValue: " << myClass.getDoubleValue() << endl;
    cout << "mySecondStruct: intValue; " << mySecondStruct.intValue << "; doubleValue: " << mySecondStruct.doubleValue << endl;

    return 0;
}


