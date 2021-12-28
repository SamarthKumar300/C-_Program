#include<iostream>
#include<string>
using namespace std;
int main(){
string name;
    cout<<" May I know your good name? "<<endl;
    
    // With the below line there is an issue that in the output will not be the  complete name , it will 
    // only be the first name not the second name , so instead of using this

    // cin>> name;    
    //---- we will use 
    getline(cin,name);
    cout<<"Welcome to the Metauniversity "<<name<<endl;


    int a,b,c;
    cout<<"Enter two numbers "<<endl;

    cin>> a>>b;

    c=a+b;
    cout<<"The sum of two numbers is "<<c<<endl;

    

    return 0;

}