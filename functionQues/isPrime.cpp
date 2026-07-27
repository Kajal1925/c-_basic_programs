#include<iostream>
using namespace std;

int isPrime(int num){
    int isPrime = 0;
    int i;
    if(num<2){
        isPrime = 0;
    }
    else{
        for(i=2; i<=num/2; i++){
            if(num%i == 0){
                isPrime = 0;
                break;
            }
            else{
                isPrime = 1;
            }
        }
    }
        if(isPrime == 0){
            cout<<num<<" is not a prime number"<<endl;
        }
        else{
            cout<<num<<" is a prime number"<<endl;
        }
    
    
    return 0;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    isPrime(num);
    return 0;
}