#include <iostream>
using namespace std;

int main(){

    int sum =0,i,n;

    cout<<"Enter the value of "<<endl;
    cin>>n;

   

    for(i=1;i<=n;i++){
        sum=sum+i;
        
    }
    cout<<"Sum is "<<sum;

    return 0;
}