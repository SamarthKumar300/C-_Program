#include <iostream>
using namespace std;

int main(){

    int n,i,count=0;

    cout<<"Enter the value of the number"<<endl;
    cin>>n;

    for(i=1; i<=n;i++){
        
        if(n%i == 0){
            count ++;
        //    count=count+1;
        }

    }
    if(count == 2){
        cout<<"The number is a prime number ";
    }
    else{
        cout<<"The number is not a prime number ";
    }

    

    return 0;
}