#include<iostream>
using namespace std;

int main(){
    int num1,num2;
     cout<<"Enter number1: "<<endl;
     cin>>num1;
     cout<<"Enter number2: "<<endl;
     cin>>num2;
     cout<<"Before Swapping"<<endl;
     cout<<"number1: "<<num1<<endl;
     cout<<"number2: "<<num2<<endl;

     num1=num1+num2;
     num2=num1-num2;
     num1=num1-num2;
     cout<<"After Swapping"<<endl;
     cout<<"number1: "<<num1<<endl;
     cout<<"number2: "<<num2<<endl;
     return 0;
}