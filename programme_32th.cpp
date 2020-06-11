// This is a programme to see the use of static member funtions  in OOPS

#include<iostream>
using namespace std;

class Student
{
public :
    int RollNo ;
    string Name ;
    static int AddmNo ;

    Student ( string N )
    {
        Name = N ;
        AddmNo++ ;
        RollNo = AddmNo ;
    }

    void display()
    {
        cout << "Name of student = " << Name << endl ;
        cout << "Roll no . of student = " << RollNo << endl ;
        cout << "\n\n" ;
    }

};

int Student :: AddmNo = 0 ;

int main()
{
    Student s1("Ed Sheran") ;
    Student s2("Charlie Puth") ;
    Student s3("Justin Bieber") ;

    s1.display() ;
    s2.display() ;
    s3.display() ;

    cout << "Total no. of addminssions = " << Student :: AddmNo << endl ;

    return 0 ;
}
