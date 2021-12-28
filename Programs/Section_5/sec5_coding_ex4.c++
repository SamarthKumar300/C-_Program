#include <iostream>
using namespace std;

int main()
{
    float speed,d,t;
    cout<<"Please enter the value of distance ";
    cin>>d;
    cout<<"Please enter the value of time taken ";
    cin>>t;

    speed=d/t;
    cout<<"The speed of the vehcile is "<< speed;

    return 0;
}