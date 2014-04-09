/*
 * =====================================================================================
 *       Filename:  advancedCppExcpetions.cpp
 *    Description:  
 *        Created:  2014-04-09 16:31
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>
using namespace std;

class DividerWithException {
    public:
        float Divide(float x, float y) {
            if(y==0) {
                throw "Divide by Zero Error!";
            }
            return  (x/y);
        }
};

int main() {
	float fNum1=5, fNum2=0, fResult = 0 ;
	DividerWithException obj;

	// try block
	try {
		fResult = obj.Divide(fNum1, fNum2);
		cout << " Result is " << fResult << endl;
	}
	// catch block
	catch(const char* errMsg){
		cout << errMsg << endl;
		cout << " Don't enter zero value for Divisor, Try again" << endl;
	}
    return 0;
}

