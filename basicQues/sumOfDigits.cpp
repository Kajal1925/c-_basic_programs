#include<iostream>
using namespace std;

int main(){
    cout<<"To find sum of digits of a number"<<endl;
    int num,digit;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=num;i !=0; i=i/10){
        digit= i%10;
        sum= sum+digit;
    }
    cout<<"Sum of digits : "<<sum;
    return 0;
}