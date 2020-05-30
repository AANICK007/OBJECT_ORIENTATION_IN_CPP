// This is a programme to see operator overloading
#include<iostream>

using namespace std;

class complex {
	private :
		int real ;
		int img ;
	public :
		complex( int r = 0 , int i = 0 ) {
			real = r ;
			img = i ;
		}
		void Setreal( int r ) {
			real = r ; 
		}
		void Setimg( int i ) {
			img = i ;
		}
		friend ostream & operator<<( ostream &out , complex &c ) ;
};

ostream & operator<<( ostream &out , complex &c ) {
	out << c.real << "+i" << c.img << endl ;
	return out ;
}

int main() {
	complex c( 4 , 3 ) ;
	cout << c ;
	operator<<( cout , c ) ;
	return 0 ;
}
