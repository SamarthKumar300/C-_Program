#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int m1,m2,m3,avg,Total;

    cout<<"Enter your marks in three subject"<<endl;
    cin>>m1>>m2>>m3;

    // Total=m1+m2+m3;
    avg=(m1+m2+m3)/3;

    if(avg>=60){
        cout<<"Your grade is A"<<endl;
    }
    else{
        
        if(avg>=35 && avg<60){
            cout<<"Your grade is B"<<endl;

        }
        else{
            cout<<"Your grade is C"<<endl;
        }

    }

    return 0;
}


// if(Avg>=60)
//     {
//         cout<<'A';
//     }
//     else
//     {
//         if(Avg>=35 && Avg<60)
//             cout<<'B';
//         else
//             cout<<'C';
//     }
// }