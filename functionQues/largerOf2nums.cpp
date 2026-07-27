#include<iostream>
using namespace std;

float greaterOf2nums(float num1, float num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
    return 0;
}
int main(){
    float num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Greater of "<<num1<<" and "<<num2<<" = "<< greaterOf2nums(num1, num2);
    return 0;
}