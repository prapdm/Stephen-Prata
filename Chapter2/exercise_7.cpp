#include <iostream>

 
void time(int h, int m);

int main()
{

	using namespace std;

	cout << "Provide number of hours: "  ;
	short hour;	
	cin >> hour;
	cout << "Provide number of minutes: "  ;
	short minutes;
	cin >> minutes;

	time(hour,minutes);
	
 
} 


void time(int h, int m)
{

	using namespace std;

	cout << "Time: " << h << ":" << m << endl;



}