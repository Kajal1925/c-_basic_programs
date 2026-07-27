#include<iostream>
using namespace std;

int main(){
    cout<<"To find the LCM of two numbers"<<endl;
    int num1,num2,min,lcm,gcd=1;
    cout<<"Enter the two numbers: ";
    cin>>num1>>num2;

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
    lcm=(num1*num2)/gcd;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;
    return 0;
}