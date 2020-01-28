//chrzoni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS10_H_
#define CLASS10_H_
#include <cstring>
#include <iostream>


class Person
{

	private:
		static const int LIMIT = 256;
		std::string lname ; //nazwisko
		char fname[LIMIT];
		
		 
	public:
		Person(); //Konstruktor domyslny
		Person( const std::string & m_lname, const char * m_fname = "Koles");
		void show() const;
		void formalshow() const;

};

#endif