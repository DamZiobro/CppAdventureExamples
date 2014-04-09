/*
 * =====================================================================================
 *       Filename:  advancedCpp_virtualFunction.cpp
 *    Description:  
 *        Created:  2014-04-09 16:01
 *         Author:  Damian Ziobro        (ziobro.damian@gmail.com)
 *        Company:  XMementoIT Limited       (info@xmementoit.com)
 * =====================================================================================
 */

#include <iostream>

using namespace std;

class Base{
	public :
		//Point 1 Virtual Function Declaration and Definition
		void Show(){
			cout << "Show() of class Base" << endl ;
		}

};
// Point 2 Inheritance concept
class Derived : public Base {
	public :
		// Point 3 Overriding Virtual Function
		void Show(){
			cout << "Show() of class Derived" << endl ;
		}
};

int main() {
	Base *pBase;
	Base bObj;
	Derived dObj;

	// Point 4 Calling virtual functions
	pBase = &bObj;
	cout << "Base pointer points Base object" << endl;
	pBase->Show();
	
	pBase = &dObj;
	cout << "Base pointer points Derived object" << endl;
	pBase->Show();
    
    return 0;
}

