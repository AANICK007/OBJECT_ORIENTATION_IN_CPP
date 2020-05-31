// This is a programme to show inheritence through rectangle and cuboid in OOPS
#include<iostream>
#include<cmath>

using namespace std ;

class Rectangle {
	private :
		float length ;
		float breadth ;
		
	public :
		Rectangle ( float l = 0 , float b = 0 ) {
			length = l ;
			breadth = b ;
		}
		void setLength ( float l ) {
			length = l ;
		}
		void setBreadth ( float b ) {
			breadth = b ;
		}
		float getLength() {
			return length ;
		}
		float getBreadth() {
			return breadth ;
		}
		float area() {
			return ( length * breadth ) ;
		}
		float perimeter() {
			return ( 2 * ( length + breadth ) ) ;
		}
		float diagonal() {
			return ( sqrt( ( length*length ) + ( breadth*breadth ) ) ) ;
		}
		bool isSquare() {
			length == breadth ;
		}
		~Rectangle() {
			cout << "\nThe given rectangle is destroyed " << endl ;
		}
};

class Cuboid : public Rectangle {
	private :
		float height ;
	
	public :
		Cuboid ( float l = 0 , float b = 0 , float h = 0 ) {
			height = h ;
			setLength ( l ) ;
			setBreadth ( b ) ;
		}
		void setHeight ( float h ) {
			height = h ;
		}
		float getHeight() {
			return height ;
		}
		float Diagonal() {
			return ( sqrt ( ( getLength() * getLength() ) + ( getBreadth() * getBreadth() ) + ( height * height ) ) ) ;
		}
		float volume() {
			return ( getLength() * getBreadth() * height ) ;
		}
		float curv_s_area() {
			return ( 2 * ( ( getLength() * getBreadth() ) + ( getBreadth() * height ) ) ) ;
		}
		float tot_s_area() {
			return ( 2 * ( ( getLength() * getBreadth() ) + ( getBreadth() * height ) + ( getLength() * height ) ) ) ;
		}
		bool isCube() {
			getLength() == getBreadth() && getLength() == height && getBreadth() == height ;
		}
		~Cuboid() {
			cout << "\nThe given cuboid is destroyed " << endl ;
		}	
};

int main() {
	Rectangle R ;
	float L , B ;
	cout << "Enter the length of rectangle = " ;
	cin >> L ;
	cout << "Enter the breadth of rectangle = " ;
	cin >> B ;
	R.setLength( L ) ;
	R.setBreadth( B ) ;
	cout << "\nTHE PROFILE OF RECTANGLE .................." << endl ;
	cout << "The length of rectangle is = " << R.getLength() << endl ;
	cout << "The breadth of rectangle is = " << R.getBreadth() << endl ;
	cout << "The area of rectangle is = " << R.area() << endl ;
	cout << "The perimeter of rectangle is = " << R.perimeter() << endl ;
	cout << "The diagonal of rectangle is = " << R.diagonal() << endl ;
	if ( R.isSquare() ) {
		cout << "The given rectangle is also a SQUARE " << endl ; 
	}
	
	cout << "\n\n\n" << endl ;
	Cuboid C ;
	float H ;
	cout << "Enter the length of cuboid = " ;
	cin >> L ;
	cout << "Enter the breadth of cuboid = " ;
	cin >> B ;
	cout << "Enter the height of cuboid = " ;
	cin >> H ;
	C.setLength( L ) ;
	C.setBreadth( B ) ;
	C.setHeight( H ) ;
	cout << "\nTHE PROFILE OF CUBOID .................." << endl ;
	cout << "The length of cuboid is = " << C.getLength() << endl ;
	cout << "The breadth of cuboid is = " << C.getBreadth() << endl ;
	cout << "The height of cuboid is = " << C.getHeight() << endl ;
	cout << "The diagonal of cuboid is = " << C.Diagonal() << endl ;
	cout << "The curved surface area of cuboid is = " << C.curv_s_area() << endl ;
	cout << "The total surface area of cuboid is = " << C.tot_s_area() << endl ;
	cout << "The volume of cuboid is = " << C.volume() << endl ;
	if ( C.isCube() ) {
		cout << "The given cuboid is also a CUBE " << endl ;
	}
	
	return 0 ;
}
