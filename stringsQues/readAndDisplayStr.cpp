#include<iostream>
using namespace std;

int main(){
    char str[100];
    
    cout<<"Enter a string: ";
    cin.getline(str, 100);// get.line reads the entire line including spaces. stps when user presses Enter.

    cout<<"String is: "<<str;

    return 0;
}