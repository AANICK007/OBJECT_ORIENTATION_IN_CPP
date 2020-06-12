// This is a programme to see the concept of Inner or Nested class in OOPS

#include<iostream>
using namespace std;

class Outer
{
public :

    void fun()
    {
        i.Display() ;
    }

    class Inner
    {
    public :
        void Display()
        {
            cout << "Display of Inner " << endl ;
        }
    };

    Inner i ;

};

int main()
{
    Outer ::Inner i ;

    return 0 ;
}
