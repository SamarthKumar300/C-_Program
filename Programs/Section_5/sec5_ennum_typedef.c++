// Concept for enum 

#include <iostream>
using namespace std;

enum day {mon,tue,wed=83,thur,fri,sat=652398};
typedef int marks;
typedef int rollno;
int main()
{
    day d;

    d=mon;
    d=tue;
    d=wed;
    d=thur;
    d=fri;
    d=sat;
    d=mon;
    d=mon;

    cout<<"The value of the day as per the day are "<<tue<<endl;
    cout<<"The value of the day as per the day are "<<wed<<endl;
    cout<<"The value of the day as per the day are "<<thur<<endl;
    cout<<"The value of the day as per the day are "<<fri<<endl;
    cout<<"The value of the day as per the day are "<<sat<<endl;
    cout<<"The value of the day as per the day are "<<sat<<endl;
  
// Concept for Typedef

    marks m1,m2,m3;
    rollno r1,r2,r3;
    int final;

    m1 = 23;
    r3 = 83;
    final = m1*r3;

    cout<<"The testing value is "<< final;

    return 0;

}




