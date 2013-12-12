/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2013-12-12 21:36 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <boost/bind.hpp> //for boost::bind
#include <vector> 
#include <algorithm> //for std::sort
#include <stdlib.h> //for rand() function

using namespace std;
using namespace boost;

class TestClass {
public:
    TestClass (){};
    virtual ~TestClass (){};  

private:
    int testValue;

public: int getTestValue(){ return testValue; }
public: void setTestValue(int testValue){ this->testValue = testValue;}

};

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - start randomizer
    srand(time(NULL));

    //II - initialize vector of TestClass objects with random test values
    //from range [1..100]
    vector<TestClass> testClassesVector;
    for (int i = 0; i<10;i++){
        TestClass testClassObject;
        testClassObject.setTestValue(rand() % 100+1);
        testClassesVector.push_back(testClassObject);
    }

    //III - print test vector before sorting it (using lambda functions)
    cout << "Test vector before sorting: " << endl;
    std::for_each(testClassesVector.begin(), testClassesVector.end(), [](TestClass& testClassObject){cout << testClassObject.getTestValue() << " ";});
    cout << endl;

    //IV - sort values using boost::bind  and lambda functions
    std::sort(testClassesVector.begin(), testClassesVector.end(), 
            boost::bind<bool>([](TestClass a, TestClass b){ return a.getTestValue() < b.getTestValue();}, _1, _2));

    //V - print testVector again after sorting it accroding to TestClasse
    //objects using lambda function
    cout << "Test vector after sorting: " << endl;
    std::for_each(testClassesVector.begin(), testClassesVector.end(), [](TestClass& testClassObject){cout << testClassObject.getTestValue()<<" ";});
    cout << endl;

    return 0;
}


