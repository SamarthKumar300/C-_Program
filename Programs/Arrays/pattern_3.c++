#include <iostream>
using namespace std;

int main(){

    for(int i=0; i<4;i++){

        for(int j=0; j<4;j++){

            if(i+j<4-1){    // ---> We are writing 4-1 because the value of the i and j will be one less due to 0
                cout<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    

    for(int i=0;i<5;i++){

        for(int j=0;j<5;j++){

            if(j<=i){

                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;

}