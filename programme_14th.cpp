// This is a programming to add two rational numbers using OOPS
#include<iostream>

using namespace std;

class Rational {
	private :
		int numer ;
		int denomi ;
	public :
		Rational ( int p = 0 , int q = 1 ) {
			numer = p ;
			denomi = q ;
		}
		void Setnumer ( int p ) {
			numer = p ;
		}
		void Setdenomi ( int q ) {
			if ( q == 0 ) {
				cout << "Denominator can't be zero " << endl ;
				denomi = 1 ;
			}
			else {
				denomi = q ;
			}
		}
		friend Rational operator+( Rational R1 , Rational R2 ) ;
		friend ostream & operator<<( ostream &out , Rational R ) ;
};

Rational operator+( Rational R1 , Rational R2 ) {
	Rational temp ;
	temp.numer = ( R1.numer * R2.denomi ) + ( R1.denomi * R2.numer ) ;
	temp.denomi = R1.denomi*R2.denomi ;
	return temp ;
}

ostream & operator<<( ostream &out , Rational R ) {
		out << R.numer << "/" << R.denomi << endl ;
		return out ;
	}

int main() {
	Rational R1 , R2 , R3 ;
	int p1 , q1 , p2 , q2 ;
	cout << "Enter numerator of first rational number = " ;
	cin >> p1 ;
	cout << "Enter denominator of first rational number = " ;
	cin >> q1 ;
	R1.Setnumer( p1 ) ;
	R1.Setdenomi( q1 ) ;
	cout << "First rational number = " ;
	cout << R1 << endl ;
	
	cout << "\nEnter numerator of second rational number = " ;
	cin >> p2 ;
	cout << "Enter denominator of second rational number = " ;
	cin >> q2 ;
	R2.Setnumer( p2 ) ;
	R2.Setdenomi( q2 ) ;
	cout << "Second rational number = " ;
	cout << R2 ;
	
	R3 = R1 + R2 ;
	
	cout << "\nAddition of both rational  numbers = " ;
	cout << R3 ;
	
	return 0 ;
}
