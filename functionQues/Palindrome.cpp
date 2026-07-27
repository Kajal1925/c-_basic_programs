#include<iostream>
using namespace std;

int isPalindrome(int num){
    int digit, og_num;
    int reverse = 0;
    if(num<0){
        return false;
    }
    og_num = num;
    for(num ; num != 0 ; num = num/10){
        digit = num%10;
        reverse = reverse*10 + digit;
    }
   if(og_num == reverse){
    cout<<og_num<<" is a PALINDROME number"<<endl;
   }
   else{
    cout<<og_num<<" is NOT a plaindrome number"<<endl;
   }
   return 0;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    isPalindrome(num);
    return 0;
}