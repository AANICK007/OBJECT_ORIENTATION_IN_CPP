// This is a programme to study access specifiers in OOPS
/*                     
							 ACCESS SPECIFIERS


			there are three types of access specifiers ::---
			
			1)  public :            always accessibles
			2) private :            not accessible outside parent class
			3) protected :          accessible in child classess but non accessible by objects
			
*/			

#include<iostream>

using namespace std ;

class Base {
	private :
		int a ;
	protected :
		int b ;
	public :
		int c ;
		void funBase() {
			a = 10 ;
			b = 20 ;
			c = 43 ;
			
			cout << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl ;
		}
};

class Derived : public Base {
	public :
		void funDerived() {
			b = 2 ;
			c = 3 ;
			
			cout << "b = " << b << endl << "c = " << c << endl ;
		}
};

int main() {
	Base x ;
	x.c = 90 ;
	cout << "Value of c = " << x.c << endl ; ;
	cout << "\n\n" ;
	x.funBase() ;
	cout << "\n\n" ;
	
	Derived d ;
	d.c = 35 ;
	cout << "Value of c = " << d.c << endl ;
	cout << "\n\n" ;
	d.funBase() ;
	cout << "\n\n" ;
	d.funDerived() ;
	
	return 0 ;
}
