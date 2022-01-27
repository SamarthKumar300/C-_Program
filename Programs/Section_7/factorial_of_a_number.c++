#include <iostream>
using namespace std;

int main(){

    int n,i,factorial=1;

    cout<<"Enter the number "<<endl;
    cin>>n;

    for(i=1; i<=n ;i++){
        factorial*=i;
    }

    cout<<"Factorial of the number is "<<factorial;

    return 0;
}