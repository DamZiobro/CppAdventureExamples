/*
 * =====================================================================================
 *
 *       Filename:  cpp11_rightAngleBracket.cpp
 *
 *    Description:  Demonstration of usage right angle bracket in nested templates in C++11
 *
 *        Version:  1.0
 *        Created:  17/09/13 13:35:29
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

int main(int argc, const char *argv[])
{
    std::vector<std::vector<int>> testVectorOfVectors; // compile error in C++03 - proper in C++11
    return 0;
}
