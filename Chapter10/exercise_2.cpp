#include <iostream>
#include <cstring>
#include "exercise_2.h"


//konstruktor domyślny
Person::Person()
{
lname = ""; 
fname[0] = '\0'; 
}

Person::Person(const std::string & m_lname, const char * m_fname)
{
lname = m_lname; 
strcpy(fname, m_fname);
}


void Person::show() const 
{
	using std::cout;
	using std::endl;


	cout << fname << " " << lname << endl;


}

void Person::formalshow()  const
{

	using std::cout;
	using std::endl;

	cout << lname << " " << fname  << endl;

}