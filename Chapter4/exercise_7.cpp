#include <iostream>
 
struct informacje
{
	std::string firma;
	int srednica;
	float waga;
	
};


int main(void)
{

using namespace std;
informacje pizza;

cout << "What is the company name?" << endl;
cin >> pizza.firma;
cout << "What is the diameter of a pizza?" << endl;
cin >> pizza.srednica;
cout << "What is the weight of a pizza?" << endl;
cin >> pizza.waga;

cout << "OK, so company name is: " << pizza.firma << ", diameter of pizza " << pizza.srednica << " and weight of pizza is " << pizza.waga << endl;


return 0;
}
	