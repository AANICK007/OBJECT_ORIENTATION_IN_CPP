// This is a programme to study concept of copy constructors

#include<iostream>
#include<cmath>

using namespace std ;

class Rectangle 
{
	private :
		float length ;
		float breadth ;
		
	public :
		
		// setxxx    ----->>>>>>>   is a mutator here
		// getxxx    ----->>>>>>>   is an accessor here
		 
		void setLength( float l ) {
			if ( l >= 0 ) {
				length = l ;
			}
			else {
				length = 0 ;
			}
		}
		
		void setBreadth( float b ) {
			if ( b >= 0 ) {
				breadth = b ;
			}
			else {
				breadth = 0 ;
			}
		}
		
		float getLength() {
			return length ;
		}
		
		float getBreadth() {
			return breadth ;
		}
		
		// this is a parameterized constructor
		Rectangle(int l , int b) {
			setLength(l) ;
			setBreadth(b) ;
		}
		
		// this is a copy constructors
		Rectangle ( Rectangle &rect ) {
			length = rect.length ;
			breadth = rect.breadth ;
		}
		
		float area() {
			return (length*breadth) ;
		}
		
		float perimeter() {
			return (2*(length + breadth)) ;
		}
		
		float diagonal() {
			return ( sqrt( (length*length) + (breadth*breadth) ) ) ;
		}
		
};

int main() {
	Rectangle r(10 , 5) ;
	
	cout << "Length of rectangle by constructor = " << r.getLength() << endl ;
	cout << "Breadth of rectangle by constructor = " << r.getBreadth() << endl ;
	
	float L , B ;
	
	cout << "\nEnter the length of rectangle = " ;
	cin >> L ;
	cout << "Enter the breadth of rectangle = " ;
	cin >> B ;
	
	r.setLength( L ) ;
	r.setBreadth( B ) ;
	
	cout << "\nThe length is = " << r.getLength() << endl ;
	cout << "The breadth is = " << r.getBreadth() << endl ;
	
	cout << "\nThe area of rectangle is = " << r.area() << endl ;
	cout << "The perimeter of rectangle is = " << r.perimeter() << endl ;
	cout << "The diagonal of rectangle is = " << r.diagonal() <<endl ;
	
	// If we want another rectangle firstly of same as 'r()' 
	Rectangle R ( r ) ;
	cout << "\nAt, begining length of rectangle = " << R.getLength() << endl ;
	cout << "At , begining breadth of rectangle = " << R.getBreadth() << endl ;
	
	cout << "\nEnter the length of rectangle = " ;
	cin >> L ;
	cout << "Enter the breadth of rectangle = " ;
	cin >> B ;
	
	r.setLength( L ) ;
	r.setBreadth( B ) ;
	
	cout << "\nThe length is = " << r.getLength() << endl ;
	cout << "The breadth is = " << r.getBreadth() << endl ;
	
	cout << "\nThe area of rectangle is = " << r.area() << endl ;
	cout << "The perimeter of rectangle is = " << r.perimeter() << endl ;
	cout << "The diagonal of rectangle is = " << r.diagonal() <<endl ;
	
	
	return 0 ;
 	
}

