#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter the value of a,b and c";
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<< "The max value is "<<a;

    }
    else{

        if(b>c){
            cout<<"The max value is"<<b;
        }
        else{
            cout<<"The maximum value is "<<c;
        }

    }
    return 0;
}