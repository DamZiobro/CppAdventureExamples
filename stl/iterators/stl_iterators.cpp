/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2013-11-29 10:25 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - defining vectors using initializer_list
    std::vector<int> myVector = {1,2,3,4,5,6,7,8,9};
    std::vector<int> myVector2 = {2,4,6,8,10};

    //II - define iterator and assign it to myVector - in C++11 you can use auto to
    //simplify declaration
    std::vector<int>::iterator myVectorIterator = myVector.begin();
    //IIa - declaration btorugh auto type
    //auto myVectorIterator = myVector.begin();

    //III - move iterator through myVector
    while(myVectorIterator != myVector.end()){
        //IV - dereference value of where myVectorIterator points to
        cout << "Next myVector element: " << *myVectorIterator <<endl;
        //V - move iterator to next vector position
        myVectorIterator++;
    }
    cout << "======================================" << endl;

    //VI - assign iterator to another container myVector2 and move through that
    //container 
    for(myVectorIterator = myVector2.begin(); myVectorIterator!=myVector2.end(); myVectorIterator++){
        //VII - assign value through iterator
        *myVectorIterator *=2;
        cout << "Next myVector2 element: " << *myVectorIterator << endl;
    }

    return 0;
}


