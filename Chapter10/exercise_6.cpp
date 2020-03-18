#include <iostream>
#include "exercise_6.h"

Move::Move(double a ,double b)   
{
	x = a;
	y = b;	 
}


void Move::showmove() const
{ 
	using std::cout;
	using std::endl;

	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}


Move Move::add(const Move & m) const
{

	double _x = m.x + x;
	double _y = m.y + y;
	Move ob(_x,_y);
	 
 
	return ob;
}

void Move::reset(double a , double b )
 {

 	x = a;
 	y = b;

 }