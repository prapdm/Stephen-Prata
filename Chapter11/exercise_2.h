#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

namespace VECTOR
{

	class Vector
	{

	public:
		enum Mode {RECT, POL} ;
	private:
		double x;
		double y;
		Mode mode;
		double set_mag()  const ;
		double set_ang()  const ;
		void set_x(double n1, double n2);
		void set_y(double n1, double n2);
	public:
		Vector();
		Vector(double nl, double n2, Mode form = RECT);
		void reset(double n1, double n2, Mode form = RECT);
		~Vector();
		double xval() const {return x;}
		double yval() const {return y;}
		double magval() const ;
		double angval() const ;
		void polar_mode();
		void rect_mode();
		//metody przeciazajace operatory
		Vector operator+(const Vector &  b) const;
		Vector operator-(const Vector &  b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
		//funkcje zaprzyjaźnione
		friend Vector operator*(double n, const Vector & a);
		friend std::ostream &
		   operator<<(std::ostream & os, const Vector & v);

		
	};


}


#endif