#include <iostream>


#include "problem1.h"
#include "problem2.h"

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

int main()
{
  Vigenere cipher("VIGENERECIPHER");
 
  string original = "Beware the Jabberwock, my son! The jaws that bite, the claws that catch!";
  string encrypted = cipher.encrypt(original);
 
 
  cout << original << endl;
  cout << "Encrypted"<< encrypted<<endl;


//vigenere cypher decryption

int main()
{
  Vigenere cipher("VIGENERECIPHER");
 
  string original = "Beware the Jabberwock, my son! The jaws that bite, the claws that catch!";
  
  string decrypted = cipher.decrypt(encrypted);
 
  cout << original << endl;
  
  cout << "Decrypted: " << decrypted << endl;
}

