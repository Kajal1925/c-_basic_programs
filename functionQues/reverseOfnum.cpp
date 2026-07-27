#include<iostream>
using namespace std;

int reverseOfNum(int num){
    int digit;
    int reverse = 0;
    while(num != 0){
        digit = num%10;
        reverse = reverse*10 + digit;
        num /= 10;
    }
    return reverse;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Reverse of "<<num<<" = "<<reverseOfNum(num);
    return 0;
}