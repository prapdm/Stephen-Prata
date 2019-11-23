#include <iostream>

const int LEN = 3;

//Prototypy
double f1(double x, double y);
double f2(double x, double y);
double f3(double x, double y);
 


int main(void)  
{

using namespace std;
cout << "Enter two values: " ;
double x,y;

 
//wskaznik do tablicy 3 elementów LEN = 3
double (*pf[LEN])(double,double) = {f1,f2,f3};
 
while(cin >> x >> y)
{


	for(int i=0; i<LEN; i++)
	{	
		
		cout << "Result of the function "<< i << " is " << (*pf[i])(x,y) << endl;

	}

 	 

	cout << "Enter again numbers or end with q" ;
}


cout << "Bye bye" << endl;
return 0;
}


double f1(double x, double y)
{
	return x+y;
}
double f2(double x, double y)
{
	return x-y;
}
double f3(double x, double y)
{
	return x*y;
}
 

