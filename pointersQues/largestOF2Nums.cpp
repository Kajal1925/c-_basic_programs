#include<iostream>
using namespace std;

void greaterNum(int *a, int *b){
    if(*a > *b){
        cout<<*a<<" is greater";
    }
    else{
        cout<<*b<<" is greater";
    }
}

int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    greaterNum(&num1, &num2);

    return 0;
}