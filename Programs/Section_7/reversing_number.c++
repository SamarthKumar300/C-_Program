#include <iostream>
using namespace std;

int main(){

    int a=0,m,n,r,sum=0;

    cout<<"Enter the numbers"<<endl;
    cin>>n;
    m=n;

    while (n>0){
        r=n%10;
        n=n/10;
        cout<<r<<endl;
        a=a*10+r;

    }
    cout<<"The reverse number is "<<a<<endl;

   
    return 0;

}