// This is a programme to study the concept of inheritence in OOPS
#include<iostream>

using namespace std ;

class Base {
	public :
		int x ;
		void show() {
			cout << x << endl ;
		}
};

class Derived : public Base {
	public :
		int y ;
		void Display() {
			cout << x << "     " << y << endl ;
		}
};

int main() {
	Base b ;
	b.x = 25 ;
	b.show() ;
	
	Derived d ;
	d.x = 10 ;
	d.y = 15 ;
	d.show() ;
	d.Display() ;
	
	return 0 ;
}
