//przeciazenie szablonow
#include <iostream>

//prototypy
template <typename T>	//szablon A
int  SumArray(T arr[], int n);

template <typename T>  //szablon B
int SumArray(T * arr[], int n);


struct debts
{

	char name[50];
	double amount;

};

int main()
{

	using namespace std;
	//Rzeczy Pana E
	int things[6] = {13,31,103,301,310,130};

	// Pan E pozyczyl innym pieniadze
	debts mr_E[3] =
	{
		{"Ima Wolfe", 2400.0},
		{"Ura Foxe", 1300.0},
		{"Iby Stout", 180.0}
		
	};


	debts * pd[3];
    pd[0] =  &mr_E[0];
    pd[1] =  &mr_E[1];
    pd[2] =  &mr_E[2];


    cout << "Mr E has: " <<   SumArray(things, 6)  << endl;
    cout << "Total debt: " << SumArray(pd, 3)   << endl;
	


	return 0;
		
}


template <typename T>	//szablon A
int  SumArray(T arr[], int n)
{
	using namespace std;
	cout << "Template A" << endl;
	int sum = 0;
	for(int i = 0; i < n; ++i)
	{
		sum += arr[i];
	}
	
	return sum;
}

template <typename T>  //szablon B
int  SumArray(T * arr[], int n)
{
	using namespace std;
	cout << "Template B" << endl;
	int sum_debt = 0;
	for(int i = 0; i < n; ++i)
	{
		sum_debt += arr[i]->amount;
	}


	return sum_debt;	
 


}

