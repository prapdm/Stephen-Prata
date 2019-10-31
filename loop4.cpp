#include <iostream>
 
static float dafine = 0.1; //Dafine  invests in a 10% deposit  (fixed amount)
static float cleo = 0.05; //Cleo invests in a 5% deposit (fixed amount +  5% profit)

int main(void)
{

using namespace std;
int kwota = 0;
float money, sum1, sum2 = 0;
int years;

cout << "Dafine and Cleo wants to invest your money. Dafine give you 10\% per year. Cleo give you 5\% per year, but after one year, he is goint to invest money plus profit again. Let's check who will be more profitable. " << endl;
cout << "How much dolars do you want invest?" << endl;
cin >> money;
cout << "How many years?" << endl;
cin >> years;


for (int i = 1; i <= years; ++i)
{
	 sum1 +=  money*dafine;
	 sum2 +=  (sum2+money)*cleo;

}

cout << "Ok, after: " << years << " years, Dafine give you back " <<  money+sum1 << " dolars and Cleo give you back "<< money+sum2 << " dolars." << endl;

if(sum1 > sum2)
{

	cout << "Looks like Dafine is more profitable, but lets check how long years we have to wait to make Cleo investment better." << endl;

	do
	{
		 sum1 +=  money*dafine;
		 sum2 +=  (sum2+money)*cleo;
		 years++;

		 cout << "After: " << years << " years, Dafine: $" << money+sum1 << " Cleo: $" << money+sum2  << endl;
	 

	} while ( (sum2-sum1) <= 0 );

	cout <<  endl; 
	cout << "After " << years << " years , Dafine give you back " <<  money+sum1 << " dolars and Cleo give you back "<< money+sum2 << " dolars." << endl; 


}

return 0;
}
	 