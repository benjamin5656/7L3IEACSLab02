#include <iostream>


#include "problem1.h"
#include "problem2.h"
Using namespace std;

//Caesar cipher encrption
int main()
{
std::string password;
int countt =0;
int length;
std::cout<<"Input your password"<<std::endl;
std::getline(std::cin,password);
length= (int)password.length();
for (countt=0; countt<length; countt++)
{
    if (isalpha(password[countt]))

    {
        password[countt] = tolower(password[countt]);
        for (int i = 0; i<13;i++)
        {
            if(password[countt]=='z')
               password[countt]='a';
            else
                password[countt]++;

        }

    }
}
    std::cout<<"Your encrypted password is:  " <<password<<std::endl;

    return 0;

}

//caeser cipher decryption 


int main()
{
std::string password;
int countt =0;
int length;
std::cout<<"Input your Encrypted password"<<std::endl;
std::getline(std::cin,password);
length= (int)password.length();
for (countt=0; countt<length; countt++)
{
    if (isalpha(password[countt]))

    {
        password[countt] = tolower(password[countt]);
        for (int i = 0; i<13;i++)
        {
            if(password[countt]=='a')
               password[countt]='z';
            else
                password[countt]--;

        }

    }
}
    std::cout<<"Your decrypted password is:  " <<password<<std::endl;

    return 0;

}


//Vigenere cipher encryption

 class Vigenere

{

    public:

        string key;

Vigenere(string key)

        {

for (int i = 0; i <key.size(); ++i)

            {

                if (key[i] >= 'A' && key[i] <= 'Z')

                    this->key += key[i];

                else if (key[i] >= 'a' && key[i] <= 'z')

                    this->key += key[i] + 'A' - 'a';

            }

        }                                             

string encrypt(string text)

        {

            string out;

for (int i = 0, j = 0; i <text.length(); ++i)

            {

                char c = text[i];

             if (c >= 'a' && c <= 'z')

                    c += 'A' - 'a';

                else if (c < 'A' || c > 'Z')

                    continue;

                out += (c + key[j] - 2 * 'A') % 26 + 'A';

                j = (j + 1) % key.length();

            }

            return out;

       }

      int main()

{

Vigenere cipher("VIGENERECIPHER");

string password ;
 std::cout<<"Enter your password to be encrypted"<<std::endl;
  std::cin>>password;
 string encrypted = cipher.encrypt(password);
std::cout<<"password"<<endl;
std::cout<<"Encrypted: "<<encrypted<<endl;
          
   
          
  //vigernere cipher decryption      
          
  class Vigenere

{

    public:

        string key;

Vigenere(string key)

        {

for (int i = 0; i <key.size(); ++i)

            {

                if (key[i] >= 'A' && key[i] <= 'Z')

                    this->key += key[i];

                else if (key[i] >= 'a' && key[i] <= 'z')

                    this->key += key[i] + 'A' - 'a';

            }

        }                                             

      
       string decrypt(string text)

        {

            string out;

for (int i = 0, j = 0; i <text.length(); ++i)

            {

                char c = text[i];

                if (c >= 'a' && c <= 'z')

                    c += 'A' - 'a';

                else if (c < 'A' || c > 'Z')

                    continue;

                out += (c - key[j] + 26) % 26 + 'A';

                j = (j + 1) % key.length();

            }

            return out;

 }

};
          
    int main()

{

Vigenere cipher("VIGENERECIPHER");

    string password ;
   std::cout<<"Enter your encrypted password"<<std::endl;
   std:cin>>password;     
        
  string decrypted = cipher.decrypt(encrypted);

cout<<"password"<<endl;

cout<<"Decrypted: "<<decrypted<<endl;

}

       
