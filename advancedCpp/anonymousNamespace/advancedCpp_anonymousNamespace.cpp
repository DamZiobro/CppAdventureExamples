/*
 * =====================================================================================
 *
 *       Filename:  advancedCpp_anonymousNamespace.cpp
 *
 *    Description:  Example of using anonymous namespace
 *
 *        Version:  1.0
 *        Created:  04/09/13 14:01:46
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 *
 * =====================================================================================
 */

#include<iostream>
using namespace std;

//this anonymous namespace will be visible only withing this file 
//'variable' cannot be used within other files (it is not global variable)
namespace {
	int variable;
}

void variableFunc(){
   //using variable withing func
   cout << " variable in function: " << variable << endl;
}


int main(){

    variable = 10;
    cout << " variable = " << variable << endl;
    variableFunc();
    cout << " variable =" << variable << endl;
    
    return 0;
}
