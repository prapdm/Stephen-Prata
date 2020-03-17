#include <iostream>
#include "exercise_5.h"



 

int main()
{

	using std::cout;
	using std::cin;
	using std::endl;

	customer josh = {"Josh", 10};
 

	Stack s;

	cout << "Check if stock is empty: "  << s.isempty()  << endl;
	cout << "Let's push Josh" << endl; 

	//Try push 20 customsers (20 x josh)

	for(int i = 0; i < 20; ++i)
	{

		if(s.push(josh))
		{
			cout << "["<<i+1<<"]" << josh.fullname << " paid " <<  josh.payment  << endl; 
			cout << "Total: " << s.sum() << endl;
		} else
		{
			cout  << "Stock is full "  << endl; 
		}

	}

	//Check if stock is full
	cout  << "Is stock full? " << s.isfull()  << endl; 
	//Check if stock is empty
	cout  << "Is stock empty? " << s.isempty()  << endl; 

	//Try pop 5 customsers (5 x josh)

	for(int i = 0; i < 5; ++i)
	{

		if(s.pop(josh))
		{
			cout << "["<<i+1<<"]" << josh.fullname << " paid -" <<  josh.payment  << endl; 
			cout << "Total: " << s.sum() << endl;
		} else
		{
			cout  << "Stock is empty "  << endl; 
		}

	}


	//Try pop 5 customsers (5 x josh)

	for(int i = 0; i < 5; ++i)
	{

		if(s.pop(josh))
		{
			cout << "["<<i+1<<"]" << josh.fullname << " paid -" <<  josh.payment  << endl; 
			cout << "Total: " << s.sum() << endl;
		} else
		{
			cout  << "Stock is empty "  << endl; 
		}

	}

	//Check if stock is full
	cout  << "Is stock full? " << s.isfull()  << endl; 
	//Check if stock is empty
	cout  << "Is stock empty? " << s.isempty()  << endl; 


	return 0;
}