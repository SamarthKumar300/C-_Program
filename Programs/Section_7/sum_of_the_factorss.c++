#include <iostream>
using namespace std;

int main(){

    int i,n,sum=0;

    cout<<"Enter the value of n"<<endl;
    cin>>n;

   
    for(i=1;i<=n;i++){
        if(n%i == 0){
        sum=sum+i;
        // sum+=i;
        }
    }
    cout<<"The factors of the number is "<<sum<<endl;

    return 0;

}