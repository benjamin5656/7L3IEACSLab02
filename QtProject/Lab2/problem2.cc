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

