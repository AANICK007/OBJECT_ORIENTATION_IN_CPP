// This is a programme to study the concept of parent class function and child class object in OOPS
#include<iostream> 
using namespace std;

class BasicCar {
	
	public :
		
		void StartCar() {
			cout << "Car started " << endl ;
		}
	
};

class AdvanceCar : public BasicCar {
	
	public :
		
		void Playmusic() {
			cout << "Playing music " << endl ;
		}
	
};

int main() {
	
	AdvanceCar A ;
	A.StartCar() ;
	A.Playmusic() ;
	
	// this simply means that we have an AdvanceCar and we call it a BasicCar 
	// so we can call only those function which we think  are present in BasicCarka
	BasicCar *ptr = &A ;
	ptr -> StartCar() ;
	
	return 0 ;
}
