#include <iostream>
#include <cstring>
#include "exercise_7.h"

 

Plorog::Plorog(const char * n, int x)
{

	//strcpy(dest,source)
	strcpy( name,n);
	ws = x;

}


void Plorog::change(int x)
{
	ws = x;
}

void Plorog::show() const
{
	using std::cout;
	using std::endl;
	cout << "Hello my name is: " << name << " and my index is " << ws << endl;
}