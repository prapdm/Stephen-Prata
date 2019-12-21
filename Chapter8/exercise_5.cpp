#include <iostream>

//stale
const int LEN = 5;

//prototypy
template <typename T> //albo class T
T max5(T arr[]);

int main(void)
{

	using namespace std;

	cout << "Enter 5 numbers. If you want end type q." << endl;
	
	double arr[LEN], n;

	for(int i = 0; i<LEN; ++i )
	{
		cout << "#" << i+1 << ": ";
		cin >> n;
		arr[i] = n;

	}

	cout << "Largest element = " << max5(arr) << endl;

}


template <typename T> 
T max5(T arr[])
{

	for(int i = 1;i < LEN; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }


	return arr[0];
}