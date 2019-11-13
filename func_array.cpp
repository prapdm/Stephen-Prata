#include <iostream>

//tablica maksymalnie 10 elementowa
const int limit = 10;

//prototypy funkcji
int fill_array(double * arr, int n);  
//Mozna uzyc rowniez int fill_array(double  arr[], int n); lub fill_array(double *, int); W obu przypadkach przekazujemy adres pierwszego elementu tablicy, a nie zawartosc tablicy
//W prototypach nie trzeba definiowac nazw, ale dobrze jest to robić
void show_array(const double  arr[], int n ); //const - zabezpiecza przed modyfikowaniem tablicy, funkcja ma tylko pokazac tablice
double calculate_array(double arr[], int n);  

int main(void)
{
using namespace std;
cout << "Provide scores: " << endl;
double scores[limit];
//int size = fill_array(scores,limit); //scores - adres pierwszego elementu tablicy rownoznaczne uzycie z &scores[0] 
int size = fill_array(&scores[0],limit); //przekazujemy do fukncji adres peirwszego elementu tablicy oraz ilosc elementow. Możemy rowniez przekazac poczatek i koniec.
show_array(scores,size);
cout << "Avarge: " << calculate_array(scores,size) << endl;
return 0;
}
 

double calculate_array(double arr[], int n)
{ 

	using namespace std;
	double sum = 0;

	for (int i = 0; i < n; ++i)
	{

		 sum += arr[i];
	}


return sum/n;
}


 


void show_array(const double arr[], int n )
{

	using namespace std;


	cout << "Scores: " ;

	for (int i = 0; i < n; ++i)
	{
		 cout <<  arr[i] << " "  ;
	}

	cout << endl ;


}



int fill_array(double * arr, int n) // lub fill_array(double  arr[], int n)
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
			//przerwij - wyjdz z petli while i wroc do petli for
			cout << "Bad data provided :(" << endl;
			break;
		} else if(temp < 0) break;
		else
		
		
		*(arr + i) = temp; //przypisanie wartosci do wyłuskanego elementu tablicy
		// lub zapis
		//arr[i] = temp; 
		 
	}

	return  i;
}