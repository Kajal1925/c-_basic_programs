#include<iostream>
using namespace std;

int main(){
    int num1,num2,temp;

    cout<<"Enter number 1: "<<endl;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;
    cout<<"Beffore Swapping "<<endl;
    cout<<"number1: "<<num1<<endl;
    cout<<"number2: "<<num2<<endl;

    temp=num1;
    num1=num2;
    num2=temp;
    
    cout<<"After swapping "<<endl;
    cout<<"number1: "<<num1<<endl;
    cout<<"number2: "<<num2<<endl;
    return 0;
    
}