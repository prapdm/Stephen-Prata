#include <iostream>
#include <cctype>

bool checkvowels(char ch);

int main(void)
{
using namespace std;

cout << "Write a sentence. A single letter \"q\" ends." << endl;

char ch;
char temp[100];
short vowel,consonants,no,i = 0;

while( (ch = cin.get()) != 'q')
{


	if(isalpha(ch))
	{

		//Pierwsza litera
		if( (i-1) < 0 ) if(checkvowels(ch))  ++vowel ; else ++consonants;
		else
		{
			//Kolejne
			if(temp[i-1] == ' ' ) if(checkvowels(ch))  ++vowel ; else ++consonants; //jeśli litera i poprzednia litera to spacja

		}

	} else 
		{

			//Pierwsza litera
			if( (i-1) < 0 ) ++no;
			else
			{
				//Kolejne
				if(temp[i-1] == ' ' )   ++no;
		
			}
				
		}







temp[i] = ch;
 ++i;

}

cout <<  vowel << " words begins with vowels" << endl;
cout <<  consonants << " words begins with consonants" << endl;
cout <<  no << " words does not begin with any of them" << endl;

return 0;
}

bool checkvowels(char ch)
{

	int vowel= 0;
 

	switch(ch)
		{ 
			case 'a': 
			case 'A': ++vowel; break;
			//case 'ą': 
			//case 'Ą': ++vowel; break;
			case 'e': 
			case 'E': ++vowel; break;
			//case 'ę': 
			//case 'Ę': ++vowel; break;
			case 'i': 
			case 'I': ++vowel; break;
			case 'o': 
			case 'O': ++vowel; break;
			case 'u': 
			case 'U': ++vowel; break;
			case 'y': 
			case 'Y': ++vowel; break;
		 
		}
 
	return  vowel;
}