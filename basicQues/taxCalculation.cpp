#include<iostream>
using namespace std;

int main(){
    cout<<"To calculate income tax based on salary using simple tax slabs"<<endl;
    cout<<"Salary up tp Rs.2,50,000= no tax"<<endl;
    cout<<"Salary up to Rs.2,50,001-Rs.5,00,000= 5%"<<endl;
    cout<<"Salary Rs.5,00,001-Rs.10,00,000= 20%"<<endl;
    cout<<"Salary above Rs.10,00,000= 30%"<<endl;

    float salary ,tax;
    cout<<"Enter your annual salary: ";
    cin>>salary;
    if(salary<=250000){
        tax=0;
    }
    else if(salary<=500000){
        tax=salary*0.05;
    }
    else if(salary<=1000000){
        tax=salary*0.20;
    }
    else{
        tax=salary*0.30;
    }
    cout<<"Income Tax=Rs. "<<tax<<endl;
    return 0;
}