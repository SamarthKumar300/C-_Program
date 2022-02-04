#include <iostream>
using namespace std;

int main(){

    int i;
    int A[5]={2,4,6,8,10};
    int B[5]={2,5};
    int C[]={4,5,6,7,3,78,746,35};
    float D[]={2.5f,4.5f,65.6f,34,634,767};
    char E[]={'A',34,'D',45};

    for(i=0;i<5;i++){
        cout<<A[i]<<endl;
        
    }
    for(i=0;i<5;i++){
        cout<<B[i]<<endl;
    }

    // For arry's where size is not defined, we use a special for loop called ( for each ) loop              
    
    for(int x:C){
        cout<<x<<endl;
    } 

    for(int x: A){
        cout<<x<<endl;
    }

    for(int x:D){
        cout<<x<<endl;  // --> Here we have constrained  the x to only consider the integer value,
                        //     that's why the output will only be the integer
    }
    for(float x:D){
        cout<<x<<endl; /* Here we are getting the actual input values for the float values 
                        and for the integer elements we have assigned them the float value in the above function*/
    }
    for(auto x:D){
        cout<<x<<endl;  /* here the output will be the actual input value of the elements
                            compiler will automatically inspect the data type*/
    }
    for(float x: E){
        cout<<x<<endl;  /* Here the output will the float value acc to the first number I guess*/
    }
    for(auto x:E){
        cout<<x<<endl;  /* */
    }

    return 0;
}