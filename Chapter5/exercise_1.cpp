#include <iostream>

int main(void)
{
	
using namespace std;
int first,second,suma;


cout << "Enter first integer" << endl;
cin >> first;
cout << "Enter second integer" << endl;
cin >> second;

 

for (int i = first; i <= second; ++i)
{
	if(i < second)
	cout << i << "+" ;
	else
	cout << i ;
	
	suma += i;
}

cout << " = " << suma << endl ;

return 0;
}