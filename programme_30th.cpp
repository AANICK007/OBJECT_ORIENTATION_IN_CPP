// This is a programme to study Static Members in OOPS

#include<iostream>
using namespace std;

class Test
{
private :
    int a ;
    int b ;

public :
    static int counnt ;
    Test()
    {
        a = 10 ;
        b = 10 ;
        counnt++ ;
    }
    static int getcount()
    {
        return counnt ;
    }

};

int Test :: counnt = 0 ;

int main()
{
    cout << "Count = " << Test :: getcount() << endl ;

    Test t1 ;
    Test t2 ;

    cout << "Count = " << t1.counnt << endl ;
    cout << "Count = " << t2.counnt << endl ;
    cout << "Count = " << Test :: counnt << endl ;
    cout << "Count = " << t1.getcount << endl ;
    cout << "Count = " << t2.getcount << endl ;

    return 0 ;
}
