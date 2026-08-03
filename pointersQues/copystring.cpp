#include<iostream>
using namespace std;

int main(){
    char str1[100], copied[100];
    char *p1, *p2;
    int i = 0;

    cout<<"Enter the string: ";
    cin.getline(str1, 100);
    
    p1 = str1;
    p2 = copied;

    while(str1[i] != '\0'){
        *p2 = *p1;
        p1++;
        p2++;
        i++;
    }
    copied[i] = '\0';

    cout<<"Copied string: "<<copied;
    return 0;    
}