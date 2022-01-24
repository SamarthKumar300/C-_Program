#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,root;
    cout<<"Please enter the value of a,b,c ";
    cin>>a>>b>>c;
    
    root=(-b+sqrt(b*b-4*a*c))/(2*a);
    cout<<"The root of the quadritic equation is "<< root;

    return 0;
}