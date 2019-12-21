#include <iostream>

int main(void)
{
using namespace std;

long long int  country;
long long int  world = 6898758899;
float percent;

cout << "Enter the number of population in your country:" << endl;
cin >> country;

percent = float(country)/float(world)*100;

cout << "The world's population is " << world << " people. Your country is "<< percent << "\% population of the world." << endl;


return 0;
}