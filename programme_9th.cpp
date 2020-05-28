// This is a programme to see the concept of THIS pointer
# include<iostream>
using namespace std;
    
class rectangle
{
private:
	int length;
	int breadth;
public:
	rectangle( int length , int breadth)
	{
		this -> length = length ;
		this -> breadth = breadth ;
	}
	int area()
	{
		return length*breadth ;
	}
};

int main()
{
	rectangle r(10,5);
	cout << "Area of rectangle = " << r.area() << endl ;
}
