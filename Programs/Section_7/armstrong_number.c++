#include <iostream>
using namespace std;

int main(){

    int m,n,r,sum=0;

    cout<<"Enter the numbers"<<endl;
    cin>>n;
    m=n;

    while (n>0){
        r=n%10;
        n=n/10;
        cout<<r<<endl;
        sum=sum+r*r*r;

    }

    if(sum==m){
        cout<<"The number is an armstrong number"<<endl;

    }
    else{
        cout<<"The number is not an armstrong number"<<endl;
    }

    return 0;

}