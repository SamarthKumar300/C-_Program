/*  This is the format of writing a for loop

    for( initialization, condition , update){
        process
        }

    This is the more concise and clean way of writing a loop

    Here first the compiler goes to check initialization , then to condition
    then it go inside the loop to check the process and
    then it update the loop

    This process keep on going until the condition becomes false
        
    */

   #include <iostream>
   using namespace std;

   int main(){

       int n,i=1;

       cout<<"Enter the value of n"<<endl;
       cin>>n;

       for(i=1; i<=n; i++){
           cout<<i<<endl;
       }

       return 0;
   }