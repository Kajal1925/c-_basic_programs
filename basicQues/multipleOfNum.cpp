#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"To check whether a number is multiple of other"<<endl;
    cout<<"Enter first number: "<<endl;
    cin>>num1;
    cout<<"Enter second number: "<<endl;
    cin>>num2;
    if(num1%num2==0){
        cout<<num1<<" is multiple of "<<num2<<endl;
    }
    else{
        cout<<num1<<" is not a multiple of "<<num2<<endl;
    }
    return 0;
}