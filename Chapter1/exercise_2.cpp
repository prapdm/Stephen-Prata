#include <iostream>

const int MIL = 1852;

int main()
{

	using namespace std;

	cout << "Provide distance in mils: "  ;
	int mils;
	cin >> mils;
	cout << "Distance in meters: " << (mils*MIL) << "m" << endl;



 
}