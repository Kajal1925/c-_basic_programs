#include<iostream>
using namespace std;

float subtract(float num1, float num2){
    cout<<num1<<" - "<<num2<<" is: "<<num1-num2<<endl;
    cout<<num2<<" - "<<num1<<" is: "<<num2-num1<<endl;
    return 0;
}
int main(){
    float num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    subtract(num1, num2);
    return 0;
}