#include <iostream>
#include <array>

int main(void)
{
	
using namespace std;
 
int num;
array<long double,100> fact;

cout << "Enter integer " << endl;
cin >> num;

fact[0] = fact[1] = 1;
 

for (int i = 0; i <= num; ++i)
{
	if(i==0 || i==1)
		cout << i << "! = 1" << endl;
	else
	{
		fact[i] = i * fact[i-1];
		cout << i << "! = " << fact[i] << endl;
	}

}




return 0;
}