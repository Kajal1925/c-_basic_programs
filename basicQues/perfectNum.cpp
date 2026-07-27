#include<iostream>
using namespace std;

int main(){
    cout<<"To check whether a number is a perfect number or not"<<endl;
    int num;
    int factor=1;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(int i=1; i<=num/2; i++){
        if(num%i==0){
            factor=i;
            sum=sum+factor;
        }
    }
    if(sum==num){
        cout<<num<<" is a PERFECT number";
    }
    else{
        cout<<num<<" is NOT a perfect number";
    }
    return 0;
}