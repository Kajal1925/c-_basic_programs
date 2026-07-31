#include<iostream>
using namespace std;

int main(){
    char str[100];
    int i = 0;

    cout<<"Enter the string: ";
    cin.getline(str, 100);

    while(str[i] != '\0'){
        if(str[i] == ' '){
           for(int j = i; str[j] != '\0'; j++){
            str[j] = str[j+1];
           }
           i--;
        }
        i++;
    }
    cout<<"String: "<<str;
    return 0;
}