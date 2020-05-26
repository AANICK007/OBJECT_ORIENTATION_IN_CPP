#include<iostream>
#include<cmath>

using namespace std ;

class Rectangle
{
	private :
		float length ;
		float breadth ;
		
	public : 
	
		// Constructors
		Rectangle() ;
		Rectangle( float l , float b ) ;
		Rectangle( Rectangle &rect ) ;
		
		// Mutators
		void setLength( float l ) ;
		void setBreadth( float b ) ;
		
		// Accessors
		float getLength() ;
		float getBreadth() ;
		
		// Facilitators
		float area() ;
		float perimeter() ;
		float diagonal() ;
		
		// Enquiry
		bool isSquare() ;
		
		// Destructor
		~Rectangle() ;
		
} ;


Rectangle :: Rectangle ( float l = 0 , float b = 0 ) {
	setLength(l) ;
	setBreadth(b) ;
}

Rectangle :: Rectangle ( Rectangle &rect ) {
	length = rect.length ;
	breadth = rect.breadth ;
}

void Rectangle :: setLength ( float l ) {
	if ( l >= 0 ) {
		length = l ;
	}
	else {
		length = 0 ;
	}
} 

void Rectangle :: setBreadth ( float b ) {
	if ( b >= 0 ) {
		breadth = b ;
	}
	else {
		breadth = 0 ;
	}
} 

float Rectangle :: getLength() {
	return length ;
}

float Rectangle :: getBreadth() {
	return breadth ;
}

float Rectangle :: area() {
	return ( length*breadth ) ;
}

float Rectangle :: perimeter() {
	return ( 2*( length + breadth ) ) ;
}

float Rectangle :: diagonal() {
	return ( sqrt( (length*length) + (breadth*breadth) ) ) ;
}

bool Rectangle :: isSquare () {
	return ( length == breadth ) ;
}

Rectangle :: ~Rectangle () {
	cout << "Rectangle is destroyed" ;
}



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
	
	if ( r.isSquare() ) {
		cout << "The given rectangle is a square " << endl ;
	}
	
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
	
	if ( R.isSquare() ) {
		cout << "The given rectangle is a square " << endl ;
	}
	
	return 0 ;
 	
}
