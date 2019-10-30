#include <iostream>
#include <vector>

int main(void)
{
	using namespace std;

	//Deklarujemy dynamiczną tablicę vector
	vector<float> time(3);
	float dane;

	cout << "Enter the first time measurement" << endl;
 		cin >> time[0];
	cout << "Enter the second time measurement" << endl;
	cin >> time[1];
	cout << "Enter the thrid time measurement" << endl;
	cin >> time[2];

	cout << "Average is: " << (time[0]+time[1]+time[2])/time.size() << endl;

return 0;
} 