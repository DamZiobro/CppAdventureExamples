/* 
 * Copyright  [2013] <XMementoIT Limited>
 *
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  Short example to show difference between vector.capacity()
 *    and vector.size() methods
 *
 *        Version:  1.0
 *        Created:  13/09/13 16:42:05
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <vector>

using ::std::vector;

/* ======= Function ==================================================
 *   Name: main
 *   Description: main entry Function
 * =================================================================== 
 */
int main(int argc, const char *argv[]) {
    vector<int> aaa(10);
    printf("aaa.capacity():%zu; aaa.size():%zu\n", aaa.capacity(), aaa.size());
    aaa.push_back(1);
    aaa.push_back(11);
    printf("aaa.capacity():%zu; aaa.size():%zu\n", aaa.capacity(), aaa.size());
    return 0;
}

