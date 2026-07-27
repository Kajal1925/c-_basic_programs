#include<iostream>
using namespace std;

int main(){
    cout<<"power of a number without library function"<<endl;
    int base,expo;
    int pow=1;
    cout<<"Enter base number: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>expo;
    for(int i=1; i<=expo; i++){
        pow=pow*base;
    }
    cout<<pow;
    return 0;
}