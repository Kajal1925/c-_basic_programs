#include<iostream>
using namespace std;

int main(){
    int num1,num2,remainder1,remainder2;
    cout<<"remainder when one number is divided by other"<<endl;
    cout<<"Enter number 1 : "<<endl;
    cin>>num1;
    cout<<"Enter number 2 : "<<endl;
    cin>>num2;
    remainder1=num1%num2;
    remainder2=num2%num1;
    cout<<"The remainder (number 1/number 2) is :"<<remainder1<<endl;
    cout<<"The remainder (number 2/number 1) is : "<<remainder2<<endl;
    return 0;

}