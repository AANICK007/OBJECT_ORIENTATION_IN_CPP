// This is a programme to study concept of constructors in Inheritence in OOPS
/*  
		Whenever we do inheritence , we should be aware that ,
		firstly the parent class default constructor will execute then ,
		the child class constuctor will execute .....
		
		Only the default constructructor of parent will execute after inheritence ,
		whether we call parameterized or non parameterized constructor 
		
*/ 


/*

<<<<<<<<<<<<<<<<<<<<<<   HEADERS >>>>>>>>>>>>>>>>>>>>>

class Base {
	public :
		Base() {
			cout << "Defalut of Base " << endl ;
		}
		Base ( int x ) {
			cout << "Parameterized of Base " << endl ; 
		}
};

class Derived : public Base {
	public :
		Derived() {
			cout << "Default of Derived " << endl ;
		}
		Derived ( int a ) {
			cout << "Parameterized of Derived " << endl ;
		}
};

int main() {
	
	
	
	/* 
			execution of :::
				Derived d ;
				
			will also give output :::----
						Default of Base
						Base of Derived
						
	*/
	
	
	
	/* 
			execution of :::
				Derived d(5) ;
				
			will also give output :::----
						Default of Base
						Parameterized of Derived
						

*/

//              TO CALLL THE PARAMETERIZED CONSTRUCTOR OF PARENT CLASS     :::::::::>>>>.......

#include<iostream> 

using namespace std ;

class Base {
	public :
		Base() {
			cout << "Defalut of Base " << endl ;
		}
		Base ( int x ) {
			cout << "Parameterized of Base " << x << endl ; 
		}
};

class Derived : public Base {
	public :
		Derived() {
			cout << "Default of Derived " << endl ;
		}
		Derived ( int a , int x ) : Base ( x )   // to call parameterized constructor of Base class
		{
			cout << "Parameterized of Derived " << a << endl ;
		}
};

int main() {
	Derived d( 10 , 89 ) ;
	
	return 0 ;
}
