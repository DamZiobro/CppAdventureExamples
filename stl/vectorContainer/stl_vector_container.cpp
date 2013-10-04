/*
 * =====================================================================================
 *
 *       Filename:  stl_vector_container.cpp
 *
 *    Description:  Example of usage vector container
 *
 *        Version:  1.0
 *        Created:  04/10/13 11:19:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector> //include vector header for vector container

using namespace std; //namespace of vector container

int main(int argc, const char *argv[])
{
    //I - declaring testVector of int elements
    vector<int> testVector;

    testVector.push_back(10);    //II - pushing back value 10 to vector
    testVector.push_back(15);
    testVector.emplace_back(5);  //III - emplaacing back (pushing using construction in-place - without copying)

    //IV - print first element of testVector using at method
    cout << "first element: " << testVector.at(0) << endl;

    //V - go through vector using random-access to vector elements 
    for (int i = 0; i < testVector.size(); ++i) {
        cout << "testVector[" << i << "]: " << testVector[i] << endl;  
    }

    //VI - get max size of testVector
    cout << "testVector.max_size(): " << testVector.max_size() << endl;

    //VI - removing all vector elements
    testVector.clear();
    cout << "after clear: testVector.size(): " << testVector.size() << endl;

    return 0;
}
