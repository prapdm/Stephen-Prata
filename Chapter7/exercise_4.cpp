#include <iostream>

//prototyp funkcji
long double probability (int numbers, int pics);

int main(void)
{
using namespace std;

double total,choises, powerball;

cout << "Enter xax lottery box, number of draw balls. For exemple 49 6 " << endl;

	while((cin >> total >> choises) && choises <= total )
	{

	cout << "Probability of win is one to: " << probability(total,choises)   << endl;
	cout << "Enter again numbers or end with q" << endl;

	}

cout << "Bye bye" << endl;

return 0;
}


long double probability (int numbers, int pics)
{

long double results = 1;
long double n,p;

	for(n = numbers, p = pics; p >0 ; n--, p--)
	{
		results = results * n/p;
	} 

	for(n = numbers, p = 1; p > 0 ; n--, p--)
	{
		results = results * n/p;
	}


return results;
}