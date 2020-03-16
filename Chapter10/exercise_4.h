//chrzoni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS40_H_
#define CLASS40_H_
#include <cstring>
#include <iostream>

namespace SALES
{
		
		class Sales
		{

			private:
				static const int QUARTERS = 4;
				double sales[QUARTERS];
				double average;
				double max;
				double min;
				 
			 
				
				 
			public: 
				void setSales(const double ar[], int n);
				void setSales();
				void showSales();

				 

		};
}


#endif