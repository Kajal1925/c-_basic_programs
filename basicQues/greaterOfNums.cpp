#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    cout<<"Comparing two numbers"<<endl;
    cout<<"Enter number 1: "<<endl;
    cin>>num1;
    cout<<"Enter number 2: "<<endl;
    cin>>num2;
    if(num1>num2){
        cout<<num1<<" is greater than "<<num2<<endl;
    }
    else if(num2>num1){
        cout<<num2<<" is greater than "<<num1<<endl;
    }
    else{
        cout<<"Both numbers are equal"<<endl;
    }
    return 0;
}