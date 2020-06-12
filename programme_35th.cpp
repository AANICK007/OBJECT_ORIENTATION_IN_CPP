// This is a programme to see exception handling betweeen functions in OOPS
// This is a to commmunicate between functions

#include<iostream>
using namespace std;

float Division ( int x , int y )
{
    if ( y == 0 )
        throw 101 ;
    return ((float)x/y) ;
}

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
        c = Division( a , b ) ;
        cout << "Value of C(a/b) = " << c << endl ;
    }

    catch ( int e )
    {
        cout << "Division wih zero " << "Error " << e << endl ;
    }

    cout << "Bye" << endl ;

    return 0;
}
