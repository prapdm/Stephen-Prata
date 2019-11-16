#include <iostream>

//tablica maksymalnie 10 elementowa
const int limit = 100;

//prototypy funkcji
int fill_array(double arr[], int n);  
void show_array(const double  arr[], int n );  
void invert_array(double arr[], int n);  

int main(void)
{
using namespace std;

cout << "Provide numbers: " << endl;
double scores[limit];
int size = fill_array(scores,limit);
show_array(scores,size);
invert_array(scores,size);
show_array(scores,size);

return 0;
}
 
void invert_array(double arr[], int n)
{ 

	using namespace std;
	double  temp;

		cout << "Inverting numbers..." << endl;

	for (int j = 0, i = n-1 ; j < i ; --i,++j)
	{
 
		temp = arr[i];
		arr[i] = arr[j] ;
		arr[j] = temp;
	 
	}

 
}

void show_array(const double arr[], int n )
{

	using namespace std;
	cout << "Your numbers: " ;

	for (int i = 0; i < n; ++i)
	{
		 cout <<  arr[i] << " "  ;
	}

	cout << endl ;
}

int fill_array(double arr[], int n)  
{
	using namespace std;
	double temp;
 	int i = 0;

	for (i; i < n; ++i)
	{
		cout << "Number " << i+1 << ": " << endl;
		
		//jesli wprowadzono cos innego niz double
		if(!(cin >> temp))
		{
			//wyzeruj kod bledu
			cin.clear();
			//pobierz pozostale znaki az do napotkania znaku nowej linie
			while (cin.get() != '\n') continue;
			cout << "Bad data provided :(" << endl;
			break;//przerwij petle
		} else if(temp < 0) break; //przerwij petle
		else
		
		
		arr[i] = temp;
		 
	}

	return  i;
}