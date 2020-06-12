// This is a programme to see the concept of excetion handling in OOPS

// Exception handling keywords are   :-   Try()   and    Catch()

#include<iostream>
using namespace std;

int main()
{
    int a , b ;
    float c ;
    cout << "Enter the value of a = " ;
    cin >> a ;
    cout << "Enter the value of b = " ;
    cin >> b ;

    try
    {
        if ( b == 0 )
            throw 101 ;
        c = (float) a / b ;
        cout << "Value of C(a/b) = " << c << endl ;
    }

    catch ( int e )
    {
        cout << "Division wih zero " << "Error " << e << endl ;
    }

    cout << "Bye" << endl ;

    return 0;
}
