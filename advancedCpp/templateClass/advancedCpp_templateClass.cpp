/*
 * =====================================================================================
 *
 *       Filename:  advancedCpp_templateClass.cpp
 *
 *    Description:  Example of usage of template class
 *
 *        Version:  1.0
 *        Created:  20/10/13 20:31:29
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

//I - defining template class
template <class myType>
class Calculator {
public:
    Calculator (){};
    virtual ~Calculator (){};

    myType add(myType a, myType b) { 
      return a+b;
    }
    myType multiply(myType a, myType b){
        return a*b;
    }
};


int main(int argc, const char *argv[])
{
    int a = 2, b =3;
    double c = 4, d = 3.2;

    //II - usage of template class for int type
    Calculator<int> intCalculator;
    int sumInt = intCalculator.add(a,b);
    cout << "sumInt = " << sumInt << endl;

    //III - usage of template class for double type
    Calculator<double> doubleCalculator;
    double sumDouble = doubleCalculator.add(c,d);
    cout << "sumDouble = " << sumDouble << endl;

    return 0;
}
