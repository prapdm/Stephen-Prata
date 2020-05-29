#include <cmath>
#include "exercise_2.h"

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;


namespace VECTOR{


	const double Rad_to_deg = 45 / atan(1.0); // = 57.29577

	//metody prywatne


	double Vector::magval() const 
	{
		return set_mag();
	}
	double Vector::angval() const 
	{
		return set_ang();
	}

	double Vector::set_mag() const
	{
		return sqrt(x*x + y*y);
	}
	double Vector::set_ang() const
	{
		if(x == 0.0 && y == 0.0)
			return 0.0;
		else
			return atan2(y,x);
	}
	void Vector::set_x(double n1, double n2)
	{
		x = n1 * cos(n2);
	}
	void Vector::set_y(double n1, double n2)
	{
		y = n1 * sin(n2);
	}

	//metody publiczne
	Vector::Vector()
	{
		x = y =  0.0;
	}

	Vector::Vector(double n1, double n2, Mode form)
	{
		mode = form;
		if(form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		} else if(form == POL)
		{
			set_x(n1,(n2/Rad_to_deg));
			set_y(n1,(n2/Rad_to_deg));
		} else
		{
			cout << "Wrong Mode. Setting x = y = mag = ang = 0\n";
			x = y = 0;
			mode = RECT;
		}
	}

	void Vector::reset(double n1, double n2, Mode form)
	{

		mode = form;
		if(form == RECT)
		{
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		} else if(form == POL)
		{
			set_x(n1,(n2/Rad_to_deg));
			set_y(n1,(n2/Rad_to_deg));
		} else
		{
			cout << "Wrong Mode. Setting x = y = mag = ang = 0\n";
			x = y = 0;
			mode = RECT;
		}

	}

	Vector::~Vector()
	{

	}	

	void Vector::polar_mode()
	{
		mode = POL;
	}	

	void Vector::rect_mode()
	{
		mode = RECT;
	}	

	//metody przeciazajace operatory
	Vector Vector::operator+(const Vector & b) const
	{
		return Vector(x+b.x, y + b.y);
	}

	Vector Vector::operator-(const Vector & b) const
	{
		return Vector(x-b.x, y - b.y);
	}

	Vector Vector::operator-() const
	{
		return Vector(-x, -y);
	}

	Vector Vector::operator*(double n) const
	{
		return Vector(n*x, n*y);
	}

	//funkcje zaprzyjaznione
	Vector operator*(double n, const Vector & a)
	{
		return a * n;
	}

	std::ostream & operator<<(std::ostream & os, const Vector & v)
	{
		if(v.mode == Vector::RECT)
		{
			os << "(x,y) = (" << v.x << " , "<< v.y << ")"; 
		} else if(v.mode == Vector::POL)
		{
			os << "(m,a) = (" << v.magval() << " , "<< v.angval() * Rad_to_deg << ")"; 
		} else
		 	os << "Wrong Mode.";

		return os; 	
	}

}
