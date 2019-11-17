#include <iostream>

//tablica maksymalnie 10 elementowa
const int limit = 10;

//prototypy funkcji
const double * fill_array(double arr[], int n);  //  zawraca adres ostatniego elementu tablicy
void show_array(const double * arr , const double * end);    
double calculate_array(double * arr, const double * end);    

int main(void)
{
using namespace std;
cout << "Provide scores: " << endl;
double scores[limit];
const double * pla ;
pla = fill_array(scores,limit); //przekazujemy do fukncji adres peirwszego elementu tablicy oraz ilosc elementow.
show_array(scores,pla); // przekazujemy pierwszy adres i ostatni adres tablicy do funkcji
cout << "Avarge: " << calculate_array(scores,pla) << endl;
return 0;
}
 
double calculate_array(double * arr, const double * end)
{ 

	using namespace std;
	double sum = 0;

	for (int i = 0; i < *end; ++i)
	{

		 sum += *(arr + i);
	}

return sum/(*end);
}

void show_array(const double * arr , const double * end)
{

	using namespace std;
	cout << "Scores: " ;

	for (int i = 0; i < *end; ++i)
	{
		 cout <<  *(arr + i) << " "  ;
	}

	cout << endl ;
}

const double * fill_array(double arr[], int n)  
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

 
	//Zwracamy adres ostatniego elementuy tablicy
	return  &arr[i-1];
}