// This is a programme to show runtime Polymorphism in OOPS

#include<iostream>
using namespace std;

class Shape
{
public :
    virtual float area() = 0 ;
    virtual float perimeter() = 0 ;
};

class Rectangle : public Shape
{
private :
    float length ;
    float breadth ;

public :
    Rectangle ( float l = 0 , float b = 0 )
    {
        length = l ;
        breadth = b ;
    }

    float area()
    {
        return ( length * breadth ) ;
    }

    float perimeter()
    {
        return ( 2 * ( length + breadth ) ) ;
    }

};

class Circle : public Shape
{
private :
    float radius ;

public :
    Circle ( float r = 0 )
    {
        radius = r ;
    }

    float area()
    {
        return ( 3.14 * ( radius * radius ) ) ;
    }

    float perimeter()
    {
        return ( 2 * 3.14 * radius ) ;
    }
};

int main() {

	Shape *s = new Rectangle ( 20.00 , 15.00 ) ;
	cout << "The area of rectangle = " << s ->area() << endl ;
	cout << "The perimeter of rectangle = " << s ->perimeter() << endl ;

	cout << "\n\n" << endl ;

	s = new Circle ( 20.00 ) ;
	cout << "The area of circle = " << s ->area() << endl ;
	cout << "The perimter of circle = " << s ->perimeter() << endl ;

	return 0 ;
}
