#include <iostream>

struct car_db
{
	std::string marka;
	int rok;
};

int main(void)
{

using namespace std;

cout << "How many cars do you want to add?" << endl;
int cars;
cin >> cars;

car_db * pc = new car_db[cars]; 

for (int i = 0; i < cars; ++i)
{
	cout << "Car #" << i+1 << ":" << endl;
	cout << "What is the model?"  << endl;
	cin >> pc[i].marka;
	cout << "What's the year of production?"  << endl;
	cin >> pc[i].rok;
}

	cout << "Thanks, we collected data:" << endl;
	for (int i = 0; i < cars; ++i)
	{
		cout <<  pc[i].rok << " " << pc[i].marka << endl;
	}



return 0;
}