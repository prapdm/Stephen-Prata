#include <iostream>
#include <cstring>

 
//Prototyp szablonu funkcji
template <typename T> //albo class T
T maxn(T arr[], int n);
 
//Jawna spezjalizacja dla typu char
template <>  
const char * maxn(const char * arr[], int n);


int main(void)
{
	using namespace std;

	//uzyj szablonu
	int arr1[6] = {3,6,2,1,7};
	cout << "Largest element = " << maxn(arr1,6) << endl;
	//uzyj szablonu
	double arr2[4] = {3.2,6.1,2.73,1.34};
	cout << "Largest element = " << maxn(arr2,6) << endl;

 
	char s1[] = "C++";
	char s2[] = "is";
	char s3[] = "not";
	char s4[] = "easy";
	char s5[] = "programing";
	char s6[] = "language!";

	const char * arr3[5] = {s1,s2,s3,s4,s5};
 
	//uzyj specjalizacji 	
	const char * wynik = maxn(arr3,5);
	cout << "The adress off the longest element = " << &wynik << " and the longest word is: "<< wynik << endl;
 
	return 0;
}

//Szablon
template <typename T> 
T maxn(T arr[], int n)
{
		
	for(int i = 1; i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }


	return arr[0];
}


//Specjalizacja
template <>
const char * maxn(const char * arr[], int n)
{

	
	for(int i = 1; i < n; ++i)
    {
        	
       if(strlen(arr[0]) < strlen(arr[i]))
           arr[0] = arr[i];
    }
 

	return  arr[0];
}