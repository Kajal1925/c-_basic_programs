#include<iostream>
using namespace std;

float multiply(float num1, float num2){
    return num1*num2;
}
int main(){
    float num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<num1<<" * "<<num2<<" = "<<multiply(num1, num2);
    return 0;
}