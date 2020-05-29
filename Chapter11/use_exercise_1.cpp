#include<iostream>
#include<cstdlib> //for rand() and srand()
#include<ctime> //for time()
#include "exercise_1.h"
#include<fstream>

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

	ofstream fout;
	fout.open("result.txt");

	while(cin >> target)
	{
		cout << "Enter step distance: ";
		if(!(cin >> dstep)) break;

		fout << "Distance to run: " << target << ", step: " << dstep << endl;

		while(result.magval() < target)
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			fout << steps << ":"  << result << endl;
			steps++;
		} 


	


		fout << "After " << steps << " steps you reach position:\n" ;
		fout << result << endl;
		result.polar_mode();
		fout << "so " << result << endl;
		fout << "Avarge step length: " << result.magval()/steps << endl;
		steps = 0;
		result.reset(0.0, 0.0) ;
		cout << "Enter distance (type e to end): ";
	}
	cout << "Bye bye\n";
	cin.clear();
	while(cin.get() != '\n') continue;


	return 0;
}