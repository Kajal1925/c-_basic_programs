#include<iostream>
using namespace std;

int evenOdd(int num){
    if(num % 2 == 0){
        cout<<num<<" is an EVEN number"<<endl;
    }
    else{
        cout<<num<<" is an ODD number"<<endl;
    }
    return 0;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    evenOdd(num);
    return 0;
}