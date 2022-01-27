#include <iostream>
using namespace std;

int main(){

    int n,r;

    cout<<"Enter the number"<<endl;
    cin>>n;

    

    while(n>0){
        r=n%10;
        n=n/10;
        cout<<"The digits of the number are "<<r<<endl;
    }
    

    return 0 ;
}