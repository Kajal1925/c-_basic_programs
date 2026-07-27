#include<iostream>
using namespace std;

int main(){
    float num1,num2;
    char op;
    cout<<"simple calculator using switch statement"<<endl;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter an operation('+', '-', '*', '/'): "<<endl;
    cin>>op;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    switch (op)
    {
    case '+':
      cout<<"Result: "<<num1+num2<<endl;
      break;
    case '-':
      cout<<"Result: "<<num1-num2<<endl;
      break;
    case '*':
      cout<<"Result: "<<num1*num2<<endl;
      break;
    case '/':
     if(num2 != 0){
      cout<<"Result: "<<num1/num2<<endl;
     }
     else{
        cout<<"Division by zero is not allowed"<<endl;
     }
      break;
    default:
      cout<<"Invalid Input!!!"<<endl;
      break;
    }
    return 0;
}