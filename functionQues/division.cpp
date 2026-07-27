#include<iostream>
using namespace std;

float division(float num1, float num2){
    cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
    cout<<num2<<" / "<<num1<<" = "<<num2/num1<<endl;
    return 0;
}
int main(){
    float num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    division(num1, num2);
    return 0;
}