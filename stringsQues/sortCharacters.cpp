#include<iostream>
using namespace std;

int main(){
    char str[100];
    char temp;
    int i, j, length = 0;

    cout<<"Enter a string: ";
    cin.getline(str, 100);

    while(str[length] != '\0'){
        length ++;
    }

    for(i = 0; i < length -1; i++){
        for(j = 0; j < length-i-1; j++){
            if(str[j] > str[j+1]){  // if the left character has a greater ASCII value,swap them
                temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    cout<<"Sorted String: "<<str;

    return 0;
}