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





