//g++ exercise_4.cpp exercise_4.h exercise_4_func.cpp
#include <iostream>
#include "exercise_4.h"

int main(void)
{
using SALES::setSales;
using SALES::showSales;
using SALES::Sales;

Sales database;

setSales(database);
showSales(database);


double ar[4];

ar[0] = 50.5;
ar[1] = 100.5;
ar[2] = 250.5;
ar[3] = 450.5;

 
setSales(database, ar , 2);
showSales(database);

setSales(database, ar , 3);
showSales(database);


return 0;
}
