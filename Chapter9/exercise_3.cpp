#include <iostream>
#include <new>
#include <cstring>

struct chaff
{
	char dross[20]; //zuzel
	int slag; //szlaka
};


const int BUF = 512;
//Bufor
chaff buffer[BUF];


int main(void)
{

	using namespace std;

	cout << "How many elements do you want add?" << endl;
	int elements;
	cin >> elements;

	//wywolanie miejscowego new
	chaff * cp = new (buffer) chaff[elements];
	//wywolanie zwyklego new
	//chaff * cp = new chaff[elements];

	for (int i = 0; i < elements; ++i)
	{
		
		cout << "Enter dross name for element "<< i+1  << " :" << endl;
		cin >> cp[i].dross;
		cout << "Enter slag value for element "<< i+1 << " :" << endl;
		cin >> cp[i].slag;

	}



	for (int i = 0; i < elements; ++i)
	{

		cout << "-----" << i+1 << "------" << endl;
		cout << "Dross name: "<< cp[i].dross << endl;
		cout << "Slag value: "<< cp[i].slag << endl;
		cout << "------------" << endl;
	}
		


}
