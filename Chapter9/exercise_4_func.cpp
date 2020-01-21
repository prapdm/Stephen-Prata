#include <iostream>
#include "exercise_4.h"
#include <cstring>

namespace SALES
{

	using namespace std;


	void setSales(Sales & s, const double ar[], int n)
	{	

 

 		double	sum;

 		if(n == 0)	
 		s.sales[n] = ar[n];
 		else
 		{
  			//fill only n elements and reset rest
 			for(int i = 0; i < QUARTERS; ++i)
			{
				if(i<=n)
				s.sales[i] = ar[i];
				else
				s.sales[i] = 0;	

				sum += s.sales[i];
			}

			

			// find the max and min element

			double min, max = s.sales[0];
			for(int i = 1;i < QUARTERS; ++i)
		    {
		       
		       if(min < s.sales[i])
		           min = s.sales[i];
		       
		       if(max > s.sales[i])
		           max = s.sales[i];
		    }
		    s.max = max;
		    s.min = min;		
 		}



 		s.average = sum/QUARTERS;

 		 


	}

	void setSales(Sales & s)
	{

		double	sum;
		char name[40];
		for(int i = 0; i < QUARTERS; ++i)
		{

			
			switch(i)
			{
				case 0: strcpy(name, "first"); break;
				case 1: strcpy(name, "second"); break;
				case 2: strcpy(name, "thrid"); break;
				case 3: strcpy(name, "fourth"); break;
			}

			cout << "Enter sales result for the " << name << " quarter: " ;
			cin >> s.sales[i];
			sum += s.sales[i];

		}
		s.average = sum/QUARTERS;

		// find the max and min element

		double min, max = s.sales[0];
		for(int i = 1;i < QUARTERS; ++i)
	    {
	       
	       if(min < s.sales[i])
	           min = s.sales[i];
	       
	       if(max > s.sales[i])
	           max = s.sales[i];
	    }

	    s.max = max;
	    s.min = min;


	}

	void showSales(const Sales & s)
	{	

		char name[40];
		for(int i = 0; i < QUARTERS; ++i)
		{


			switch(i)
			{
				case 0: strcpy(name, "first"); break;
				case 1: strcpy(name, "second"); break;
				case 2: strcpy(name, "thrid"); break;
				case 3: strcpy(name, "fourth"); break;
			}

			cout << endl;
			cout << "Sales result in the " << name << " quarter: " <<  s.sales[i] << endl;
			cout << "------------"<< endl;

		}


			
			cout << "Average: "<<  s.average  << endl;
			cout << "Max: "<<  s.min << endl;
			cout << "Min: "<<  s.max  << endl;
			


	}



}