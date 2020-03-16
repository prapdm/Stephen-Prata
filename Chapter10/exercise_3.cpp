#include <iostream>
#include <cstring>
#include "exercise_3.h"



 

Golf::Golf( const char * m_fullname , int m_handicap )
{
handicap = m_handicap; 
strcpy(fullname, m_fullname);
}


void Golf::change(const Golf & g)
{
	*this = g;
	
	
}
 

void Golf::setgolf()
{
	using std::cout;
	using std::cin;

	cout << "Enter name of player: " ;
	cin >> fullname;
	cout << "Enter  handicap: " ;
	cin >> handicap;
}
 

void Golf::sethandicap()
{
	using std::cout;
	using std::cin;
	using std::endl;
	cout << "Enter new handicap: " ;
	cin >> handicap;
	cout << "\nModification complete" << endl ;		

}


void Golf::showgolf() const
{

	using std::cout;
	using std::endl;

	cout << "Name: " << fullname << endl ;
	cout << "Handicap: " << handicap << endl ;
	cout << "-------------" << endl;
	    

}
