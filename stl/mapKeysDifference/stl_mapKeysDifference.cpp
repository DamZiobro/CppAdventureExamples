/*
 * =====================================================================================
 *       Filename:  main.cpp
 *    Description:  
 *        Created:  2013-11-20 11:41 
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

//I - definition of comparator structure
struct comparatorStruct {
    bool operator()(std::pair<const int, int>& a, std::pair<const int,int>& b){
        return a.first != b.first;
    }
};

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */

int main(int argc, const char **argv)
{
    //II - defining two maps for comparison its keys using initialization lists
    map<int, int> firstMap = {  {1,1}, {2,4}, {3,9}, {4,16}, {5,25} };
    map<int, int> secondMap = { {1,1}, {2,3}, {4,16}, {10,3} };

    //III - declaring map which will contain difference
    map<int, int> diffMap;
        
    //IV - calculating difference between firstMap and secondMap basing
    //on map keys using comparatorStruct and write that difference to diffMap
    std::set_difference(firstMap.begin(), firstMap.end(), secondMap.begin(), secondMap.end(), std::inserter(diffMap, diffMap.begin()), comparatorStruct());

    //V - writing difference map using auto C++11 feature
    for( auto it = diffMap.begin(); it != diffMap.end(); it++){
        cout << "key: " << it->first << "; value: " << it->second << endl;
    }

    return 0;
}


