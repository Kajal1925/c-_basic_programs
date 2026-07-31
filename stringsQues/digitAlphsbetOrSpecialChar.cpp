#include<iostream>
using namespace std;

int main(){
    char str[100];
    int i = 0, alphabet = 0, digit = 0, specialChar = 0;

    cout<<"Enter the string: ";
    cin.getline(str, 100);
    
    while(str[i] != 0){
        if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z')){
            alphabet ++;
        }
        else if(str[i] >= '0'&& str[i] <= '9'){
            digit ++;
        }
        else{
            specialChar ++;
        }
        i++;
    }
    cout<<"Alphabet: "<<alphabet<<endl;
    cout<<"Digits: "<<digit<<endl;
    cout<<"Special Characters: "<<specialChar<<endl;

    return 0;
}