#include<iostream>
using namespace std;

int main(){
    char str[100], ch;
    int i = 0;

    cout<<"Enter a string: ";
    cin.getline(str, 100);

    cout<<"Enter the character: ";
    cin>>ch;

    while(str[i] != 0){
        if(str[i] == ch){
            cout<<"First occuernce of "<<ch<<" is at position: "<<i+1;
            return 0;
        }
        i++;
    }
    cout<<"Character not found";
    return 0;

}