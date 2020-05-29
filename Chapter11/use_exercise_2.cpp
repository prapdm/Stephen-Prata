#include<iostream>
#include<cstdlib> //for rand() and srand()
#include<ctime> //for time()
#include "exercise_2.h"


int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); //srand umozliwia ustawienia wlasnego zarodka time(0) zwieksza przypadkowosc
	double direction;
	Vector step;
	Vector result(0.0, 0.0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter distance (type e to end): ";

	while(cin >> target)
	{
		cout << "Enter step distance: ";
		if(!(cin >> dstep)) break;

		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			cout << result << endl;
			steps++;
		}

		cout << "After " << steps << " steps you reach position:\n" ;
		cout << result << endl;
		result.polar_mode();
		cout << "so " << result << endl;
		cout << "Avarge step length: " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0) ;
		cout << "Enter distance (type e to end): ";
	}
	cout << "Bye bye\n";
	cin.clear();
	while(cin.get() != '\n') continue;


	return 0;
}