#include <iostream>
#include <cstring>
#include "exercise_4.h"


namespace SALES
{

	using namespace std;

	void Sales::setSales(const double ar[], int n)
	{	

 		

 		double	sum;

 		if(n == 0)	
 		sales[n] = ar[n];
 		else
 		{
  			//fill only n elements and reset rest
 			for(int i = 0; i < QUARTERS; ++i)
			{
				if(i<=n)
				sales[i] = ar[i];
				else
				sales[i] = 0;	

				sum += sales[i];
			}

			

			// find the max and min element

			double min, max = sales[0];
			for(int i = 1;i < QUARTERS; ++i)
		    {
		    	
		       
		       if(min > sales[i])
		           min = sales[i];
		       
		       if(max < sales[i])
		           max = sales[i];
		    }
		    
 		}



 		average = sum/QUARTERS;

 		 


	}

	void Sales::setSales()
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
			cin >> sales[i];
			
			sum += sales[i];

		 

		}
		average = sum/QUARTERS;

		// find the max and min element
 
		 
		double min_s, max_s =   sales[0] ;


		 
		for(int i = 1;i < QUARTERS; ++i)
	    {
	    	

	       if(min_s < sales[i])
	           min_s = sales[i];
	       
	       if(max_s > sales[i])
	           max_s = sales[i];
	    }

	 	max = max_s;
	 	min = min_s;
	 

	}

	void Sales::showSales()
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
			cout << "Sales result in the " << name << " quarter: " <<  sales[i] << endl;
			cout << "------------"<< endl;

		}


			
			cout << "Average: "<<  average  << endl;
			cout << "Max: "<<  min << endl;
			cout << "Min: "<<  max  << endl;
			


	} 


}