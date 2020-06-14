#include<iostream>
#include<string>

using namespace std ;

class Employee {

	private :

		int EmpId ;
		string Name ;

	public :

		Employee ( int E , string N ) {
			EmpId = E ;
			Name = N ;
		}

		void setEmpId ( int E ) {
			EmpId = E ;
		}

		void setName ( string N ) {
			Name = N ;
		}

		int getEmpId() {
			return EmpId ;
		}

		string getName() {
			return Name ;
		}

};

class FullTimers : public Employee {

	private :

		int Salary ;

	public :

		FullTimers ( int E = 0 , string N = "Sexu" , int S = 0 ) : Employee ( E , N ) {
			setEmpId ( E ) ;
			setName ( N ) ;
			Salary = S ;
		}

		void setSalary ( int S ) {
			Salary = S ;
		}

		int getSalary() {
			return Salary ;
		}

};

class PartTimers : public Employee {

	private :

		int DailyWage ;

	public :

		PartTimers ( int E = 0 , string N = "Chodu" , int DW = 0 ) : Employee ( E , N ) {
			setEmpId ( E ) ;
			setName ( N ) ;
			DailyWage = DW ;
		}

		void setDailywage ( int DW ) {
			DailyWage = DW ;
		}

		int getDailyWage() {
			return DailyWage ;
		}

};


int main() {
    FullTimers F ;
    PartTimers P ;
    int E1 , E2 , S1 , S2 ;
    string str , ctr ;

    cout << "Enter name of fulltimer = " ;
    getline(cin,str) ;
    cout << "Enter Employee Id = " ;
    cin >> E1 ;
    cout << "Enter salary = " ;
    cin >> S1 ;
    F.setName(str) ;
    F.setEmpId(E1) ;
    F.setSalary(S1) ;

    cout << "\n" << endl ;

    cout << "Enter name of parttimer = " << flush ;
    cin >> ctr ;
    cout << "Enter Employee Id = " ;
    cin >> E2 ;
    cout << "Enter Dailywage = " ;
    cin >> S2 ;
    P.setName(ctr) ;
    P.setEmpId(E2) ;
    P.setDailywage(S2) ;

    cout <<"\n\n\n" << endl ;

    cout << "DISPLAY IDENTITY OF FULLTIMER \n\n" << endl ;

    cout << "Name = " << F.getName() << endl ;
    cout << "EmpId = " << F.getEmpId() << endl ;
    cout << "Salary = " << F.getSalary() << endl ;

    cout <<"\n\n\n" << endl ;

    cout << "DISPLAY IDENTITY OF FULLTIMER \n\n" << endl ;

    cout << "Name = " << P.getName() << endl ;
    cout << "EmpId = " << P.getEmpId() << endl ;
    cout << "DailyWage = " << P.getDailyWage() << endl ;



	return 0 ;
}
