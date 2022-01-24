#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Formula  for distance between two points  ---->   (x2-x1)2 +(y2-y1) ka whole square
    float x2,x1,y2,y1,distance;
    cout<<"Enter the value of x1,x2,y1 and y2 ";
    cin>>x1>>x2>>y1>>y2;

    distance=(sqrt(pow((x2-x1),2)+pow((y2-y1),2)));
    cout<<"The distance between the two points is "<< distance;

    return 0;

}
