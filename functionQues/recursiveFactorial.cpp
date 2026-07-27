#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    int result = n* factorial(n-1);
    return result;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial: "<<factorial(num);
    return 0;
}