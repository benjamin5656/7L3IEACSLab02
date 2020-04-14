#include "problem1.h"

#include <string>;
#include <iostream>;

using namespace std;

string show(string input)
{

 input;
std::cout<<"Enter an input"<<std::endl;
std::cin>>input;
int countt =0;
int length;

std::getline(std::cin,input);
length= (int)input.length();
for (countt=0; countt<length; countt++)
{
    if (isalpha(input[countt]))

    {
        input[countt] = tolower(input[countt]);
        for (int i = 0; i<13;i++)
        {
            if(input[countt]=='z')
               input[countt]='a';
            else
                input[countt]++;

        }

    }
}
   return input;


}


//encrypting vigenere cipher

class Vigenere
{
public:
  string key;
 
  Vigenere(string key)
  {
    for(int i = 0; i < key.size(); ++i)
    {
      if(key[i] >= 'A' && key[i] <= 'Z')
        this->key += key[i];
      else if(key[i] >= 'a' && key[i] <= 'z')
        this->key += key[i] + 'A' - 'a';
    }
  }
 
  string encrypt(string text)
  {
    string out;
 
    for(int i = 0, j = 0; i < text.length(); ++i)
    {
      char c = text[i];
 
      if(c >= 'a' && c <= 'z')
        c += 'A' - 'a';
      else if(c < 'A' || c > 'Z')
        continue;
 
      out += (c + key[j] - 2*'A') % 26 + 'A'; 
      j = (j + 1) % key.length();
    }
 
    return out;
  }
