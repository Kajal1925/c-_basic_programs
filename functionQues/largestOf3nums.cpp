#include<iostream>
using namespace std;

float largestOf3nums(float num1, float num2, float num3){
    if((num1>num2)&&(num2>num3)){
        return num1;
    }
    else if((num2>num1)&&(num1>num3)){
        return num2;
    }
    else{
        return num3;
    }
    return 0;
}
int main(){
    float num1, num2, num3;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Enter third number: ";
    cin>>num3;
    cout<<"Largest of "<<num1<<" , "<<num2<<" and "<<num3<<" = "<<largestOf3nums(num1, num2 ,num3);
    return 0;
}