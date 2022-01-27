#include <iostream>
using namespace std;

int main(){


    int n,i=1;

    cout<<"Enter the number "<<endl;
    cin>>n;

    // While Loop
    while(i<=n){
        cout<<i<<endl;
        i++;

    }

    // do while loop
    do{
        cout<<2*i<<endl;
        i++;
    }while(i<=n);

    return 0;

    // We can use either while loop or do while ,it's upto us what we want to use 
}