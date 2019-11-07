//g++ -std=c++11  twarp.cpp
#include <iostream>

const float tax_0 = 0;
const float tax_1 = 0.1;
const float tax_2 = 0.15;
const float tax_3 = 0.2;
const int limit_0 = 5000;
const int limit_1 = 10000; 
const int limit_2 = 20000;  
const int limit_3 = 35000;  

int main(void)
{
using namespace std;

cout << "Enter the taxable amount. If you want end - press q" << endl;

double amount,tax;


	//Jeśli not true wejdz do srodka, w przeciwnym razie nic nie rob.
	while((cin >> amount) && amount > 0 )
	{

		if(amount >= limit_3)
		{
			tax = (amount-limit_3)*tax_3;
			cout << tax_3*100 << "\% from " << (amount-limit_3) << " is " << tax << endl;
			tax += limit_2*tax_2;
			cout << tax_2*100 << "\% from " << (limit_2) << " is " << limit_2*tax_2 << endl;
			tax += limit_1*tax_1;
			cout << tax_1*100 << "\% from " << (limit_1) << " is " << limit_1*tax_1 << endl;
			tax += limit_0*tax_0;
			cout << tax_0*100 << "\% from " << (limit_0) << " is " << limit_0*tax_0 << endl;

		} else if (amount >= limit_2 && amount < limit_3)
		{

			tax = (amount-limit_2)*tax_2;
			cout << tax_2*100 << "\% from " << (amount-limit_2) << " is " << tax << endl;
			tax += (limit_2-limit_1)*tax_1;
			cout << tax_1*100 << "\% from " << (limit_2-limit_1) << " is " << (limit_2-limit_1)*tax_1 << endl;
			tax += (limit_1-limit_0)*tax_1;
			cout << tax_1*100 << "\% from " << (limit_1-limit_0) << " is " << (limit_1-limit_0)*tax_1 << endl;
			tax += (limit_0)*tax_0;
			cout << tax_0*100 << "\% from " << (limit_0) << " is " << (limit_0)*tax_0 << endl;


		} else if (amount >= limit_1 && amount < limit_2)
		{

			tax = (amount-limit_1)*tax_1;
			cout << tax_1*100 << "\% from " << (amount-limit_1) << " is " << tax << endl;
			tax += (limit_1-limit_0)*tax_1;
			cout << tax_1*100 << "\% from " << (limit_1-limit_0) << " is " << (limit_1-limit_0)*tax_1 << endl;
			tax += (limit_0)*tax_0;
			cout << tax_0*100 << "\% from " << (limit_0) << " is " << (limit_0)*tax_0 << endl;

		 

		}else if (amount >= limit_0 && amount < limit_1)
		{

			tax = (amount-limit_0)*tax_1;
			cout << tax_1*100 << "\% from " << (amount-limit_0) << " is " << (amount-limit_0)*tax_1 << endl;
			tax += (limit_0)*tax_0;
			cout << tax_0*100 << "\% from " << (limit_0) << " is " << (limit_0)*tax_0 << endl;

		 

		} else if  (amount >= 0 && amount < limit_0)
		{

			tax = amount*tax_0;
			cout << tax_0*100 << "\% from " << (limit_0) << " is " << limit_0*tax_0 << endl;

		}

		cout << "You have to pay: " <<  tax << " tax" << endl;
		cout << "Enter the taxable amount. If you want end - press q" << endl;	
	}


 

return 0;
}