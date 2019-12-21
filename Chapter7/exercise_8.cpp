#include <iostream>

//stałe
const int seasons = 4;
const std::string pory_roku[seasons] = {"Spring", "Summer", "Autumn", "Winter"};

//prototypy
void fill(double * exp);
void show(double * exp);

int main(void)
{


double exp[seasons];
fill(exp); //przekazujemy adres pierwszego elementu tabblicy exp
show(exp);

return 0;
}


void fill(double * exp)
{
	using namespace std;
	for (int i = 0; i < seasons; ++i)
	{
		cout << "Enter expenses for the period >>" << pory_roku[i] << " <<" << endl;
		cin >> exp[i];
	}

}

void show(double * exp)
{
	using namespace std;
	double total = 0;
	cout << "Expenses " << endl;
	for (int i = 0; i < seasons; ++i)
	{
		  cout << pory_roku[i] << ": " << exp[i] << endl;
		  total += exp[i];
	}

	cout << "Total: " << total << endl;

}