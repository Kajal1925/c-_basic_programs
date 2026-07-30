#include<iostream>
using namespace std;

int main(){
    char str1[100], str2[100];
    int i = 0;

    cout<<"Enter the first string: ";
    cin.getline(str1, 100);

    cout<<"Enter the second string: ";
    cin.getline(str2, 100);

    while(str1[i] != '\0' || str2[i] != '\0'){
        if(str1[i] != str2[i]){
            cout<<"strings are not equal.";
            return 0;
        }
        i++;
    }
    cout<<"Strings are  equal.";
    return 0;
}