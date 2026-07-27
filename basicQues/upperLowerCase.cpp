#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"To check whether a character is uppercase or lowercase"<<endl;
    cout<<"Enter an alphabet: "<<endl;
    cin>>ch;
    if((ch>='A')&&(ch<='Z')){
        cout<<ch<<" is an UPPERCASE character "<<endl;
    }
    else if((ch>='a')&&(ch<='z')){
        cout<<ch<<" is a LOWERCASE character "<<endl;
    }
    else{
        cout<<"Invalid Input!! "<<endl;
    }
    return 0;
}