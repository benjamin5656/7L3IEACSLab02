#include "problem2.h"

#include <string>;
#include <iostream>;

using namespace std;

//decrypting Caesar cipher

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
            if(input[countt]=='a')
               input[countt]='z';
            else
                input[countt]--;

        }

    }
}
   return input;


}

// decryptinh vigenere cipher



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
 




string decrypt(string text)
  {
    string out;
 
    for(int i = 0, j = 0; i < text.length(); ++i)
    {
      char c = text[i];
 
      if(c >= 'a' && c <= 'z')
        c += 'A' - 'a';
      else if(c < 'A' || c > 'Z')
        continue;
 
      out += (c - key[j] + 26) % 26 + 'A'; 
      j = (j + 1) % key.length();
    }
 
    return out;
  }
};




