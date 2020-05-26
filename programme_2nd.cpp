// This is a programme to show pointer pointing to an object in heap memory in OOPS

#include<iostream> 
#include<cmath>

using namespace std ;

class Rectangle
{
	public :
		float length ;
		float breadth ;
	
		float area() {
			return ( length*breadth ) ; 
		}
	
		float perimeter() {
		return ( 2*(length + breadth) ) ;
		}
	
		float diagonal() {
			float d ;
			d = sqrt( (length*length) + (breadth*breadth) ) ;
			return d ;
		}
	
} ;

int main() {
	Rectangle *p ;
	p = new Rectangle ;
	
	cout << "Enter the length of rectangle = " ;
	cin >> p -> length ;
	cout << "Enter the breadth of rectangle = " ;
	cin >> p -> breadth ;
	
	cout << "\nArea of Rectangle = " << p -> area() << endl ;
	cout << "Perimeter of Rectangle = " << p -> perimeter() << endl ;
	cout << "Diagonal of Rectngle = " << p -> diagonal() << endl ;
	
	return 0 ;	
}
