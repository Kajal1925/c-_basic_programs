#include<iostream>
using namespace std;

int main(){
    char str1[100], str2[100];
    char *p1, *p2;
    
    cout<<"Enter first string: ";
    cin.getline(str1, 100);

    cout<<"Enter second string: ";
    cin.getline(str2, 100);

    p1 = str1;
    p2 = str2;

    while(*p1 != '\0' && *p2 != '\0'){
        if(*p1 != *p2){
            cout<<"Strings are not equal.";
            return 0;
        }
        p1++;
        p2++;
    }
    if(*p1 == '\0' &&*p2 == '\0'){
        cout<<"strings are equal.";
    }
    else{
        cout<<"Strings are not equal.";
    }
    return 0;
}