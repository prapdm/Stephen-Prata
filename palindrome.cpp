#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isPalindrome(string word)
{
  // Please write your code here.
  int len = word.length();

  for(int i=0;i<len;++i)
  { 
      if(isalpha(word[i]))
      {
        if(islower(word[i])) word[i] = tolower(word[i]);
      } 

   }
 
  string old_word = word;
  
  int n=len-1;

  for(int i=0;i<(len/2);++i){
    char temp = word[i];
    word[i] = word[n];
    word[n] = temp;
    n = n-1;
  }

  if(old_word == word) return true;
  else return false;

}

int main()
{
  string word;
  cin >> word;
  cout << isPalindrome(word) << endl;
}