#include <iostream>

const int SLEN = 30;

struct student   {

char fullname[SLEN];
char hobby[SLEN];
int ooplevel;

};

//prototypy
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student * ps);
void display3(const student pa[], int n);


int main(void)  
{

using namespace std;

cout << "Enter size of group: " ;
int class_size;
cin >> class_size;

//pobierz pozostale znaki az do napotkania znaku nowej lini
while (cin.get() != '\n')
	continue;

student * ptr_stu = new student[class_size];
int entered = getinfo(ptr_stu, class_size);

for(int i = 0; i < entered ; i++)
{
	display1(ptr_stu[i]);
	display2(&ptr_stu[i]);
}

display3(ptr_stu,entered);
delete [] ptr_stu;

cout << "Ready" << endl;

return 0;	
}


int getinfo(student pa[], int n)
{
	int i;
	using namespace std; 
	char ch;
 

	for(i = 0; i < n; i++ )
	{

	 
		cout << "Student " << i+1 << ": " << endl;
		cout << "Fullname: "<< endl  ;
		
		//Jesli wprowadzono puste imie przerwij petle
		if((ch = cin.get()) == '\n') break;

		cin >> pa[i].fullname;
		cout << "Hobby: " << endl ;
		cin >> pa[i].hobby;
		cout << "Operator level: "<< endl  ;
		cin >> pa[i].ooplevel;

		//pobierz pozostale znaki az do napotkania znaku nowej lini
		while (cin.get() != '\n')
			continue;

	}

return i;
}


void display1(student st)
{
	using namespace std;
	cout << "----------------- " << endl; 
	cout << "Fullname: " << st.fullname << endl; ;
	cout << "Hobby: " << st.hobby << endl; ;
	cout << "Operator level: " << st.ooplevel << endl; ;


}

void display2(const student * ps)
{
	using namespace std;
	cout << "----------------- " << endl; 
	cout << "Fullname: " << ps->fullname << endl; ;
	cout << "Hobby: " << ps->hobby << endl; ;
	cout << "Operator level: " << ps->ooplevel << endl; ;


}

void display3(const student pa[], int n)
{
	using namespace std;
	for(int i = 0; i < n; i++ )
	{

	cout << "----------------- " << endl; 
	cout << "Fullname: " << pa[i].fullname << endl; ;
	cout << "Hobby: " << pa[i].hobby << endl; ;
	cout << "Operator level: " << pa[i].ooplevel << endl; ;

	}



}