#include <iostream>

double aritmetic_mean (double one, double two);


int main(void)
{

using namespace std;

double n1, n2, aritmetic;

cout << "Please enter the numbers and I will calculate aritmetic mean. If you have enough, write 0." << endl;

do
{
	cin >> n1 >> n2;
	aritmetic = aritmetic_mean(n1,n2);
	cout << "Aritmetic mean = " << aritmetic << endl;
	 
}while (n1 != 0 and n2 != 0);  


return 0; 
}



double aritmetic_mean (double one, double two)
{

	double aritmetic = 0;
	aritmetic = 2*one*two/(one+two);


	return aritmetic;
} 