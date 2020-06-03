// This is a programme to study virtual function in OOPS
#include<iostream>
using namespace std;

class BasicCar{
	
	public :
		virtual void start() {
			cout << "start basic car " ;
		}
	
};

class AdvanceCar : public BasicCar {
	
	public :
		void start() {
			cout << "start advance car " ;
		}
	
};

int main() {
	BasicCar *p = new AdvanceCar() ;
	p -> start() ;
	
	return 0 ;
}
