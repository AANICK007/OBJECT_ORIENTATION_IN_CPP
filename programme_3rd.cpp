// This is a programme to show Data Hiding in OOPS in C++

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
	Rectangle r ;
	float L , B ;
	
	cout << "Enter the length of rectangle = " ;
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

