/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2013-12-12 12:32 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char **argv)
{
    //I - declaration to fuple using initializer list
    std::tuple<int, int, string> myTuple(1,2,"myString");

    //II - getting tuple element value by argument number (like in C++11)
    cout << "First tuple int: " << std::get<0>(myTuple) << endl;
    cout << "Second tuple int: " << std::get<1>(myTuple) << endl;
    cout << "Tuple string: " << std::get<2>(myTuple) << endl;

    //III - getting tuple element via type name (new in C++14)
    cout << "Get tuple string element by type: " << std::get<2>(myTuple) << endl;

    //VI - unable to get tuple int element by type because it is ambiguous
    //cout << "First tuple int by type: " << std::get<int>(myTuple) << endl;

    return 0;
}


