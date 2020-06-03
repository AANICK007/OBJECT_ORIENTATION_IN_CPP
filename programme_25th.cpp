// This is a programme with function overriding with base class pointer and derived class object in OOPS
// herre we will call derived classs fun using virtual function
#include<iostream>
using namespace std;

class Base {
	
	public  :
		virtual void fun() {
			cout << "Fun of base " ;
		}
	
};

class Derived : public Base {
	
	public :
		void fun() {
			cout << "Fun of derived " ;
		}
	
};

int main() {
	Derived d ;
	Base *p = &d ;
	p -> fun() ;
	
	return 0 ;
}
