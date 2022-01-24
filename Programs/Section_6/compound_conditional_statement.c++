#include <iostream>
using namespace std;

int main()
{
    int hours;

    cout<<"Enter the value of time";
    cin>>hours;

    if(hours>=9 && hours <= 18){
        cout<<"This is considered as office time";
        
    }
    else{
        cout<<'This is consideres as leisure time';
    }
    return 0 ;
}