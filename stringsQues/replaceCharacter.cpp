#include<iostream>
using namespace std;

int main(){
    char str[100];
    char oldChar, newChar;
    int i = 0;

    cout<<"Enter the string: ";
    cin.getline(str, 100);

    cout<<"Enter the character to replace: ";
    cin>>oldChar;

    cout<<"Enter new character: ";
    cin>>newChar;

    while(str[i] != '\0'){
        if(str[i] == oldChar){
            str[i] = newChar;
        }
        i++;
    }
    
    cout<<"Updated string: "<<str;
    return 0;
}