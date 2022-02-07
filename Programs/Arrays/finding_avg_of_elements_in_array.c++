#include <iostream>
using namespace std;

int main(){

    int n,i;
    float num[100],sum=0.0,average;

    cout<<"Enter the numbers of elements: ";
    cin>>n;
    
    for(int i=0;i<n;i++){

        cout<<"Enter the elements: ";
        cin>>num[i];
        sum+= num[i];
    }

    average=sum/n;
    cout<< "Average of the elements is "<<average<<endl;

    return 0;
}