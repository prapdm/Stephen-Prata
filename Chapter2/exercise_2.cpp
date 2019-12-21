#include <iostream>
#include <cmath>

int main(void)
{
	using namespace std;

	//1cm to 30.48 stóp lub 2.54 cali 
	const float ft = 1/30.48;
	const float in = 1/2.54;
	//1kg to 2.20462262 funtów
	const float lb = 2.20462262;
	//1 stopa to 12 cali
	const short int inch = 12;

	float waga, cale, funt, stopa, wzrost, bmi; // reszta zmennoprzecikowa

	cout << "What is your weight in lb?" << endl;
	cin >> funt;

	cout << "What is your height in feets?" << endl;
	cin >> stopa;

	cout << "What is your height in pounds?" << endl;
	cin >> cale;

	//zmieniamy stopy na cale
	wzrost = stopa*inch;
	//sumujemy cale
	wzrost = wzrost + cale;
	//zamieniamy na cm
	wzrost = wzrost/in;
	//oraz na metry
	wzrost = wzrost/100;

	cout << "Your height is " << wzrost << "m" << endl;

	//waga w funtach na kg
	waga = funt/lb;
	cout << "Your weight is " << waga << "kg" << endl;

	bmi = waga/sqrt(wzrost);

	cout << "Your BMI is " << bmi <<  endl;

}