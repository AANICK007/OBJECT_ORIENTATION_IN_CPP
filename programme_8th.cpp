// This programme shows difference between struct and class
// Struct has everything public but by default class members are private

#include<iostream>

using namespace std ;

struct Demo {
	int x ;
	int y ;
	
	Display () {
		cout << x << " " << y << endl ;
	}
};

int main() {
	Demo d ;
	
	d.x = 10 ;
	d.y = 5 ;
	
	d.Display() ;
	
	return 0 ;
	
}
