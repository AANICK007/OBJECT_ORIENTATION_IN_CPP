// This is a programme to see function overriding
#include<iostream>
using namespace std;

class Base {
	
	public :
		
		void Display() {
			cout << "Display of base " << endl ;
		}
	
};

class Derived : public Base {
	
	public :
		
		void Display() {
			cout << "Display of derived " << endl ;
		}
	
};

int main() {
	Derived d ;
	d.Display() ;
	
	// to call display of derived
	d.Base::Display() ;
}
