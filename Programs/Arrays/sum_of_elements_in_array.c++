#include <iostream>
using namespace std;

int main(){

    int A[]={2,4,11,8,10,15,13},n=7;
    int sum=0;

    for(int i=0;i<7;i++){
        sum=sum+A[i];

    }
    cout<<"The sum of the elements is "<<sum;
    return 0;
}