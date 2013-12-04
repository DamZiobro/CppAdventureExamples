/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2013-12-04 14:25 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <vector>
#include <algorithm> //this ile contains count and count_if declaration

using namespace std;

//IVa - defining predicate function
bool isEven(int value){
    return !(value % 2);
}

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - vector definition using initializer_list mechanism
    std::vector<int> myVector= {2,3,4,5,6,7,6,6,6};

    //II - count element having value 6 in all vector's elements
    int numberOf6 = std::count(myVector.begin(), myVector.end(), 6);

    //III - count element having value 6 in first 5 vector's elements
    int numberOf6InFirst5Elements = std::count(myVector.begin(), myVector.begin()+5, 6);

    cout << "number of elements having value 6 in all myVector's elements: " << numberOf6 << endl;
    cout << "number of elements having value 6 in first 5 myVector's elements: " << numberOf6InFirst5Elements << endl;

    //IV - demonstrate countif using isEven(int) predicate function
    int numberOfEvenNumbers = std::count_if(myVector.begin(), myVector.end(), isEven);

    cout << "number of even values in myVector: " << numberOfEvenNumbers << endl;

    return 0;
}


