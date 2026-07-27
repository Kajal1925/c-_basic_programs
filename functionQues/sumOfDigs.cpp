#include<iostream>
using namespace std;

int sumOfDigs(int num){
    int digit;
    int sum = 0;
    while(num != 0){
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    cout<<"Sum of digits = "<<sum;
    return 0;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    sumOfDigs(num);
    return 0;
}