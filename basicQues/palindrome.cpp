#include<iostream>
using namespace std;

int main(){
    cout<<"To check whether a number is a palindrome or not"<<endl;
    int num,digit;
    int reverse=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=num;i !=0;i=i/10){
        digit=i%10;
        reverse= reverse*10+digit;
    }
    if(num==reverse){
        cout<<num<<" is a PALINDROME"<<endl;
    }
    else{
        cout<<num<<" is NOT a plaindrome"<<endl;
    }
    return 0;
}