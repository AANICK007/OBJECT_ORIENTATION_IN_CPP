// This is a programme to study the concept of parent class function and child class object in OOPS
#include<iostream>
using namespace std;

class Rectangle {
	
	public :
		
		void Area() {
			cout << "Area of rectangle " << endl ;
		}
	
};

class Cuboid : public Rectangle {
	
	public :
		
		void Volume() {
			cout << "Volume of cuboid " << endl ;
		}
	
};


int main() {
	Cuboid c ;
	
	c.Area() ;
	c.Volume() ;
	
	Rectangle *p ;
	
	p -> Area() ;
	// p -> Volume() ;
	
	// there is no concept of derived class pointer and base class object
	
	// Rectangle R ;
	// Cuboid *ptr = &R ;
	
	return 0 ;
}
