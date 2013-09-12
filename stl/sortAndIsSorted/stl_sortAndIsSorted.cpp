/*
 * =====================================================================================
 *
 *       Filename:  stl_sortAndIsSorted.cpp
 *
 *    Description:  Example of demonstration of using STL sort and is_sorted functions
 *
 *        Version:  1.0
 *        Created:  11/09/13 09:45:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 *
 * =====================================================================================
 */

#include <iostream>
#include <algorithm> //need to include to use sort() and is_sorted()
 
int main() 
{
    std::vector<int> testVector = {3,1,5,3,2,5};

    //printing vector and checking whether it is sorted or not
    for (auto i : testVector) std::cout << i << ' ';
    std::cout << ": is testVector sorted: " << std::is_sorted(testVector.begin(), testVector.end()) << '\n';

    //sorting first tree elements of vector
    std::sort(testVector.begin(), testVector.begin()+3);

    //checking whether first 3 elements of vector are sorted
    for (auto i : testVector) std::cout << i << ' ';
    std::cout << ": are first 3 elements_sorted: " << std::is_sorted(testVector.begin(), testVector.begin()+3) << '\n';

    //sorting all elements of vector
    std::sort(testVector.begin(), testVector.end());

    //checking whether all elements of vector are sorted
    for (auto i : testVector) std::cout << i << ' ';
    std::cout << ": is testVector sorted: " << std::is_sorted(testVector.begin(), testVector.end()) << '\n';

}
