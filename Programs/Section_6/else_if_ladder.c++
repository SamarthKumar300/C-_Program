#include <iostream>
using namespace std;

int main(){

// Q -- >  Display Day name 

    int number ,month, digit;
    cout<<"Enter the number of the day"<<endl;
    cin>>number;

    if(number == 1){
        cout<<"Monday"<<endl;
    }
    else if(number == 2){
        cout<<"Tuesday"<<endl;

    }
    else if(number == 3){
        cout<<"Tuesday"<<endl;

    }
    else if (number == 4){
        cout<<"Wednesday"<<endl;

    }
    else if (number ==5){
        cout<<"Thursday"<<endl;

    }
    else if (number == 6){
        cout<<"friday"<<endl;

    }
    else if (number == 7){
        cout<<"Saturday"<<endl;

    }
    else if (number ==8){
        cout<<"Sunday"<<endl;
    }
    else{
        cout<<"Invalid day";
    }


    // Q --->  Display Month Name
    cout<<"Enter the number of the month"<<endl;
    cin>>month;
    if(month == 1){
        cout<<"jan"<<endl;
    }
    else if (month ==2){
        cout<<"Feb"<<endl;

    }
    else if (month == 3){
        cout<<"Mar"<<endl;
    }
    else if (month ==4){
        cout<<"apr"<<endl;
    }
    else if (month ==5){
        cout<<"may"<<endl;
    }
    else if (month ==6){
        cout<<"june"<<endl;
    }
    else if (month ==7){
        cout<<"july"<<endl;
    }
    else if (month ==8){
        cout<<"august"<<endl;
    }
    else if (month ==9){
        cout<<"sept"<<endl;
    }
    else if (month ==10){
        cout<<"oct"<<endl;
    }
    else if (month ==11){
        cout<<"nov"<<endl;
    }
    else if (month ==12){
        cout<<"dec"<<endl;
    }
    else{
        cout<<"Invalid Month"<<endl;
    }

    cout<<"Enter the digit number"<<endl;
    cin>>digit;

    if(digit == 1){
        cout<<"One"<<endl;

    }
    else if(digit ==2){
        cout<<"two"<<endl;
    }
    else if(digit ==3){
        cout<<"three"<<endl;
    }
    else if(digit ==4){
        cout<<"four"<<endl;
    }
    else if(digit ==5){
        cout<<"five"<<endl;
    }
    else if(digit ==6){
        cout<<"six"<<endl;
    }
    else if(digit ==7){
        cout<<"seven"<<endl;
    }
    else if(digit ==8){
        cout<<"eight"<<endl;
    }
    else if(digit ==9){
        cout<<"nine"<<endl;
    }
    else if(digit ==10){
        cout<<"ten"<<endl;
    }
    else{
        cout<<"Invalid Number";
    }


    return 0;
    
}

// Be careful about using increment and derement in conditionals (due to short circuit)