#include <iostream>

const long LEN = 63240;

//prototyp
double convert(double n);


int main()
{

	using namespace std;

	cout << "Provide number of  light years: "  ;
 	double light_years;
 	cin >> light_years;

 	cout << light_years << " light years = " << convert(light_years) << " astronomical unit" << endl;
}


double convert(double n)
{
return (n*LEN);
}
