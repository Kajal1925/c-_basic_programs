#include<iostream>
using namespace std;

int main(){
    char str[100], ch;
    int i, pos = -1;

    cout<<"Enter the string: ";
    cin.getline(str, 100);

    cout<<"Enter the chracter: ";
    cin>>ch;

    // for(i = 0; str[i] !='\0'; i++){
    //     if(str[i] == ch){
    //         pos = i;
    //     }
    // }
    // if(pos == -1){
    //     cout<<"Character not found.";
    // }
    // else{
    //     cout<<"Last occurence of "<<ch<<" is at position: "<<pos+1;
    // }

    int length = 0;

    while(str[length] != 0){
        length ++;
    }
    for(i = length-1; i>=0; i--){
        if(str[i] == ch){
            cout<<"Last occurence of "<<ch<<" is at position: "<<i+1;
            return 0;
        }
    }
    cout<<"character not found.";
    return 0;
}