#include <iostream>
#include <cctype>

int main(void)
{

using namespace std;
char ch;

cout << "Type some text. When you're done write @" << endl;
 

while( (ch = cin.get()) != '@')
{ 

if(isalpha(ch))
{


	if(islower(ch)) ch = toupper(ch);
	else if(isupper(ch)) ch = tolower(ch);
 
	
} else if(isspace(ch)) ch = ' ';


cout << ch  ;
 
 
}


return 0;
}  