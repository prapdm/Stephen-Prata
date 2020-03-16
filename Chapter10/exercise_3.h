//chrzoni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS30_H_
#define CLASS30_H_
#include <cstring>
#include <iostream>


class Golf
{

	private:
		static const int Len = 10;
		char fullname[Len];
		int handicap;
	 
		
		 
	public: 
		Golf(const char * m_fullname = "Someone", int m_handicap = 0);
		void change(const Golf & g);
		void setgolf();
		void sethandicap();
		void showgolf() const;
		 

};

#endif