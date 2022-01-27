#include <iostream>
using namespace std;

int main(){

    int i , n;

    cout<<"Enter the value of the  number"<<endl;
    cin>>n;

    for(i=1; i<=10;i++){
        cout<<i<<"*"<< n<<"="<<i*n<<endl;
    }

    return 0;
}