#include<iostream>
using namespace std;

int main(){
    cout<<"To check whether a number is a prime number or not"<<endl;
    int num,prime=1;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<=2){
        prime=0;
    }
    else{
        for(int i=2; i<= (num/2); i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
    }
    if(prime==0){
        cout<<num<<" is NOT a prime number";
    }
    else{
        cout<<num<<" is a PRIME number";
    }
    return 0;

}