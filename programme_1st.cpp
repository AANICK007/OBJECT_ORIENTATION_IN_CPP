// This is a programme to understand basics of Class and Objects in OOPS

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
	Rectangle r1 , r2 ;
	r1.length = 10 ;
	r1.breadth = 5 ;
	
	cout << "Area of r1 = " << r1.area() << endl ;
	cout << "Perimeter of r1 = " << r1.perimeter() << endl ;
	cout << "Diagonal of r1 = " << r1.diagonal() << endl ;
	
	cout << "\nNow ,for second rectangle " << endl ;
	cout << "Enter the length = " ;
	cin >> r2.length ;
	cout << "Enter the breadth = " ;
	cin >> r2.breadth ;
	
	cout << "Area of r2 = " << r2.area() << endl ;
	cout << "Perimeter of r2 = " << r2.perimeter() << endl ;
	cout << "Diagonal of r2 = " << r2.diagonal() << endl ;
	
	return 0 ;
}





