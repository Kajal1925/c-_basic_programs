#include<iostream>
using namespace std;

int main(){
    cout<<"To print GCD of two numbers"<<endl;
    int num1,num2,min,gcd=1;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    
    if(num1>num2){
        min=num2;
    }
    else{
        min=num1;
    }
    for(int i=1; i<=min; i++){
        if(num1%i==0 && num2%i==0){
            gcd=i;
        }
    }
    cout<<" GCD of "<<num1<<" and "<<num2<<" is: "<<gcd;
    return 0;
}