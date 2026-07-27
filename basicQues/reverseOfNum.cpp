#include<iostream>
using namespace std;

int main(){
    cout<<"To reverse a number"<<endl;
    int num;
    int reverse=0;
    cout<<"Enter a number: ";
    cin>>num;
    for( int i=num;i !=0;i= i/10){
        int remainder= i%10;
        reverse= reverse*10+ remainder;
    }
    cout<<"Reverse of "<<num<<" is : "<<reverse;
    return 0;
}