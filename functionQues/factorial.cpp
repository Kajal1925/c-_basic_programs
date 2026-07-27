#include<iostream>
using namespace std;

int factorial(int num){
     int factorial=1;
    if(num<=1){
        return num;
    }
   int i=1;
    while(i <= num){
        factorial= factorial*i;
        i++;
    }
    return factorial;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" = "<<factorial(num);
    return 0;
}