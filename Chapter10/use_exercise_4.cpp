#include <iostream>
#include "exercise_4.h"

 

int main()
{

	using std::cout;
	using std::cin;
	using std::endl;
	using namespace  SALES;

 	Sales company;
 	company.setSales();
 	company.showSales();

 	double ar[4];

	ar[0] = 50.5;
	ar[1] = 100.5;
	ar[2] = 250.5;
	ar[3] = 450.5;

 
	company.setSales( ar , 2);
	company.showSales();

	company.setSales(ar , 3);
	company.showSales();

	return 0;
}