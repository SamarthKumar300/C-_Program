#include <iostream>
using namespace std;

int main(){
    int age;

    cout<<"Please enter your age ";
    cin>>age;

    if(age<= 12 || age >=50){
        cout<< "You are eligible to buy the subscription";

    }
    else{
        cout<<"You are not eligible";
    }

    return 0;

}