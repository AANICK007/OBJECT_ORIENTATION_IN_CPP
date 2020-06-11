// This is a programme to see the use of static member funtions  in OOPS

#include<iostream>
using namespace std;

class Innova
{
public :
    static int price ;

    static int getprice()
    {
        return price ;
    }
};

int Innova :: price = 2500000 ;

int main()
{
    Innova I1 , I2 , I3 ;

    cout << "Price of first Innova = " << I1.getprice() << endl ;
    cout << "Price of second Innova = " << I2.getprice() << endl ;
    cout << "Price of third Innova = " << I3.getprice() << endl ;

    return 0 ;
}
