/*
 * =====================================================================================
 *
 *       Filename:  advancedCpp_conversionConstructorAndOperator.cpp
 *
 *    Description:  C++ conversion constructor and conversion operator example
 *
 *        Version:  1.0
 *        Created:  30/09/13 16:56:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;

class TestClass {
public:
    //I - int type conversion constructor
    TestClass(int i){
        cout << "Inside int conversion constructor -> i: " << i << endl;
        this->intValue = i;
    }

    //II - string conversion constructor
    TestClass(string s){
        cout << "Inside string conversion constructor - > s: " << s << endl;
        this->stringValue = s;
    }

    //III - int conversion operator
    operator int(){ 
        cout << "Inside int conversion operator -> intValue: " << intValue << endl;
        return intValue; 
    }        

    //IV - string conversion operator
    operator string(){ 
        cout << "Inside string conversion opertoar -> stringValue: " << stringValue << endl;
        return stringValue;
    }

private:
    int intValue;
    string stringValue;
};


int main(int argc, const char *argv[])
{
    TestClass testObject = 10; //V - invoking int conversion constructor
    TestClass testObject2 = string("testString"); //VI - invoking string conversion constructor
    //TestClass testObject3 = "aaaa"; //IX - compiler error - we do not have
    //char* conversion constructor defined within our class

    int testInt = testObject;  //VII - invoking int contersion operator
    string testString = testObject2; //VIII - invoking string conversion operator
    //char* testDouble = testObject; //X - compiler error - we do not have
    //char* conversion operator defined within our class

    cout << "testInt value: " << testInt << endl;

    cout << "testString value: " << testString << endl;

    return 0;
}
