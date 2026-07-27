#include<iostream>
using namespace std;

int gcd(int num1, int num2){
    int min;
    int gcd;
    if(num1>num2){
        min = num2;
    }
    else{
        min = num1;
    }
    for(int i= 1; i<=min; i++){
        if(num1%i==0&& num2%i==0){
            gcd= i;
        }
    }
    return gcd;
}
int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd(num1, num2);
    return 0;
}