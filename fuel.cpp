#include <iostream>

int main(void)
{
using namespace std;

 
float km,fuel,avg;


cout << "How many kilometers did you travel?" << endl;
cin >> km;
cout << "Enter the amount of fuel in liters" << endl;
cin >> fuel;

cout << "Fuel consumption is: " << fuel/km*100 << "l/100km" << endl;


return 0;
}