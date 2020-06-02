// This is a programme to study the concept of parent class function and child class object in OOPS

#include<iostream>
using namespace std;

class Base {
	
	public :
		
		void fun1() {
			cout << "Fun1 of base " << endl ; ;
		}
	
};

class Derived : public Base {
	
	public :
		
		void fun2() {
			cout << "Fun2 of derived " << endl ;
		}
	
};

int main() {
	
	Derived d ;
	d.fun1() ;
	d.fun2() ;
	
	Base *ptr = &d ;
	
	ptr -> fun1() ;
	
	// as the pointer is of base class 
	// it cannot call derived class functions , so , .....
	//  ptr -> fun2() ;            is not valid
	// ptr of base class can only call base class functions
	// pointer of base class will look for functions in base class only
	
	return 0 ;
}
