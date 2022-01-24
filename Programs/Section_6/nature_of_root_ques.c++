#include <iostream>
#include <cmath>
using namespace std;

int main (){

    int a,b,c,d,r1,r2;

    cout<<"Enter the value of a,b and c "<<endl;
    cin>>a>>b>>c;

    d=b*b-4*a*c;


    if(d==0){
        cout<<"The roots are real and equal"<<endl;
        cout<<(-b/(2*a))<<endl;

    }
    else{

        if(d>0){
            cout<<"The roots are real and unequal"<<endl;
            cout<<(-b + sqrt(b*b-4*a*c))/(2*a)<<endl;
            cout<<(-b-sqrt(d))/(2*a)<<endl;


        }
        else{
            cout<<"The roots are imaginary";
        }
    }

    return 0;
}
