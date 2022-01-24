#include <iostream>
using namespace std;

int main(){
    int age;

    cout<<"please enter your age ";
    cin>>age;

    if(age>=12 && age<=50){
        cout<<"You are an adult";

    }
    else{
        cout<<"You are a senior citizen";
    }
}