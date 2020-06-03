// This is a programme to achieve Polymorphism in OOPS
#include<iostream>
using namespace std;

class Car {
	
	public :
		virtual void start() = 0 ;
		virtual void stop() = 0 ;		 
};

class Innova : public Car{
	
	public :
		void start() {
			cout << "Innova started" << endl ;
		}
		void stop() {
			cout << "Innova stopped" << endl ;
		}
	
};

class GWagon : public Car {
	
	public :
		void start() {
			cout << "GWagon started" << endl ;
		}
		void stop() {
			cout << "GWagon started" << endl ;
		}
	
};

int main() {
	Car *c = new Innova() ; 
	c -> start() ;
	c = new GWagon() ;
	c -> start() ;
	
	return 0 ;
}
