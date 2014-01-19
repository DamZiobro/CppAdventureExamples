/*
 * =====================================================================================
 *       Filename:  cpp11_lambdaFunctions.cpp
 *    Description:  Example of usage C++11 lambda functions
 *        Created:  2013-12-11 14:11 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - declaration of myVector using C++11 initializer list
    vector<int> myVector = {1,2,3,4,5,6,7};  

    //II - calculation of sum of vector elements using lambda functions  
    int sum = 0;
    for_each(myVector.begin(), myVector.end(), 
            [&sum](int value){sum+=value;});

    //III - print sum of vector elements
    cout << "Sum of vector elements: " << sum << endl;
    return 0;
}


