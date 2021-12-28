//  Net Salary = Basic Salary+ Basic Salary*Percentage of Allowance-Basic Salary*Percentage of Deduction

#include <iostream>
#include <cmath>
using namespace std;

// typedef float salary;
// typedef float percentage_of_allowance;
// typedef float basic_salary;

int main()
{
    float net_salary,basic_salary,percentage_of_allowance,percentage_of_deduction;

    cout<<"Please enter the value of basic salary"<<endl;
    cin>>basic_salary;
    cout<<"Please enter the value of percentage of deduction "<<endl;
    cin>>percentage_of_deduction;
    cout<<"Please enter the value of percentage of allowance "<<endl;
    cin>>percentage_of_allowance;

    net_salary = basic_salary+ basic_salary*percentage_of_allowance/100-basic_salary*percentage_of_deduction/100;

    cout<<"Your net salary is "<<net_salary<<endl;
    cout<<"Enjoy your day !!!"<<endl;

    return 0;

}
