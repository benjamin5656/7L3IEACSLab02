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


//Vigenere cipher encryption
int main()
{
    string password;
    string key ;
    string result;

    int k=0;

    std::cout<<"Enter the password to be encrypted"<<std::endl;
    std::cin>>password;
    std::cout<<"Enter the keyword"<<std::endl;
    std::cin>>key;
    for (int i=0;i<password.length();i++)
    {
        result[i]=(((password[i]-97)+(key[k]-97))%26)+97;
        k++;
        if(k==6)
            k=0;
    }
    std::cout<<"     \n\n\n";
    for(int i=0; i<password.length();i++);

   return 0;



}











//Caesar cipher decryption

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
            if(password[countt]=='a')
               password[countt]='z';
            else
                password[countt]--;

        }

    }
}
    std::cout<<"Your encrypted password is:  " <<password<<std::endl;

    return 0;

}

