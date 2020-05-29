#include<iostream>
#include<cstdlib> //for rand() and srand()
#include<ctime> //for time()
#include "exercise_3.h"


int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0)); //srand umozliwia ustawienia wlasnego zarodka time(0) zwieksza przypadkowosc
	double direction;

	unsigned long steps = 0;
	double dstep,attempts,target;
	double min,max,avg = 0;
 


	cout << "Enter number of attempts: ";
	cin >> attempts;

	cout << "Enter distance: ";
	cin >> target;

	cout << "Enter step distance: ";
	cin >> dstep;
 
	for(int i = 0; i < attempts; ++i)
	{

		Vector step;
		Vector result(0.0, 0.0);
		cout << "Round  " << i+1  << endl;

		while(result.magval() < target)
		{
			
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			result = result + step;
			steps++;
		}



		if(i == 0) min = steps; //zapisz pierwszy wynik
 		cout << "Steps:  " << steps  << endl;

     	if(max < steps)
	           max = steps;
	       
	     if(min > steps)
	           min = steps;
	}


	avg = steps/attempts;
 
		

		

	cout << "After " << attempts << " attempts:\n" ;

	cout << "Minimum number of steps: " << min << endl;
	cout << "Maximum number of steps: " << max << endl;
	cout << "Avarge number of steps: " << avg << endl;

	 
 
	cin.clear();
	while(cin.get() != '\n') continue;


	return 0;
}