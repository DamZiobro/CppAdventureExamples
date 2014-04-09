#include <iostream>
#include <string>
using namespace std;

// A simple example to describe stack unwinding concept
class Sample {
	private : 
		string sName;
	public :
		Sample(string s):sName(s){}
		~Sample()
		{
			cout << "In Sample::Destructor, destroying " << sName << endl;
		}
		void Func1();
		void Func2();
};

void Sample::Func1(){
	// Here stack memory is used to store object
	Sample a("Object A");
	Sample::Func2();
	cout << "Return from Func1" << endl;
}

void Sample::Func2() {
	// Here stack memory is used to store object
	Sample b("Object B");
	throw "In Func2, exception happened";
	cout << "Return from Func2" << endl;
}

int main(){
	//Try block
	try{
		Sample mObj("Main Object");
		mObj.Func1();
		cout << "End of try block" << endl;
	}
	//Catch block
	catch (const char* sMsg){
		cout << "Exception Caught: " << sMsg << endl;
	}
	cout << "End of Main " << endl;
    
    return 0;
}
