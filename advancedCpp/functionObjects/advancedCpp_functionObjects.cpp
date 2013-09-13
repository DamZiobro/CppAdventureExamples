/*
 * =====================================================================================
 *
 *       Filename:  advancedCpp_functionObjects.cpp
 *
 *    Description:  Example of usage function objects in C++
 *
 *        Version:  1.0
 *        Created:  13/09/13 16:57:07
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

class isOdd {
public:
    isOdd (){};
    virtual ~isOdd (){};
    bool operator() (int val) {
        return val % 2;
    }
};


int main(int argc, const char *argv[])
{
    isOdd isOddTest;
    vector<int> testVector = {2,3,5,8};
    for(auto i : testVector){
        cout << i << " isOdd? : " << (isOddTest(i) ? "yes" : "no") << endl;
    }
    return 0;
}

