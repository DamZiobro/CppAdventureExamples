/*
 * =====================================================================================
 *
 *       Filename:  advancedCpp_templateFunctions.cpp
 *
 *    Description:  Example which shows how to use template functions
 *
 *        Version:  1.0
 *        Created:  20/10/13 19:55:56
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

//I - definition of template function
template <class myType>
myType getSum(myType a, myType b)
{
    return a+b;
}

int main(int argc, const char *argv[])
{
    int a =1, b=2;
    double c=3.2, d=4.5;

    //II - using of template function for different types
    int sumInt = getSum<int>(a,b);
    double sumDouble = getSum<double>(c,d);

    cout << "sumInt = " << sumInt << endl;
    cout << "sumDouble = " << sumDouble << endl; 
    return 0;
}

