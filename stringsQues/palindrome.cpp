#include<iostream>
using namespace std;

int main(){
    char str[100];
    char reversed[100];
    bool isPalindrome = true;

    cout<<"Enter the string: ";
    cin.getline(str, 100);

    int i =0 ;
    while(str[i] != '\0'){
        i++;
    }
    i--;
    int j = 0;
    while(i >=0){
        reversed[j] = str[i];
        i--;
        j++;
    }
    reversed[j] = '\0';
   for(int k = 0; str[k] != '\0'; k++){
    if(str[k] != reversed[k]){
        isPalindrome = false;
        break;
    }
   }
   if(isPalindrome == true){
    cout<<"The string is palindrome";
   }
   else{
    cout<<"The string is not palindrome";
   }

   return 0;
}