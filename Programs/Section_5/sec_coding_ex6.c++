#include <iostream>
using namespace std;

int main()
{
    int P,T,R,simple_interest;
    cout<<"Please enter the value of P,T,R ";
    cin>>P>>T>>R;

    simple_interest=P*R*T;
    cout<<"The value of simple interest is "<<simple_interest;

    return 0;
}