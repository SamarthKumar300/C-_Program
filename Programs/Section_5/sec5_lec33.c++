#include <iostream>
using namespace std;

int main()
{
    int a,b,sum;
    a=74;
    b=320;

    sum=a+b;
    cout<<"The sum of two numbers is "<<sum ;
    sum+=a;
    cout<<"The value after one change "<<sum;
    sum*=b;
    cout<<"The value after final change "<<sum;

    return 0;

}