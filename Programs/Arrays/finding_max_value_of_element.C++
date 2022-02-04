#include <iostream>
using namespace std;

int main(){

    int A[]={4,6,27,15,31,22,30,29,8,16};
    int max=4;

    for(int x:A){
        if(x>max){
            max=x;
        }
    }
    cout<<"The maximum element is "<<max<<endl;

    return 0;
}