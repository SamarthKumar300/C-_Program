#include <iostream>
using namespace std;

int main()
{
    int r,h,volume;
    cout<<"Please enter the value of r,h,volume ";
    cin>>r>>h;
    
    volume=3.14*(r*r)*h;
    cout<<"The volume of cylinder is "<< volume;

    return 0;
    
}