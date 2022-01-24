// First Program of this lecture ( How to add two numbers)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int a,b,c;
    // cout<<"Enter two numbers ";

    // cin>> a>>b;

    // c=a+b;
    // cout<<"The sum of two numbers is "<<c;

    // Second program of this lecture ( How to make WELCOME message for the user)

    string name;
    cout<<" May I know your good name? ";
    
    // With the below line there is an issue that in the output will not be the  complete name , it will 
    // only be the first name not the second name , so instead of using this

    // cin>> name;    
    //---- we will use 
    getline(cin,name);
    cout<<"Welcome to the Metauniversity "<<name;

    

    return 0;

}




