#include<iostream>
using namespace std;

int main(){
    cout<<"To check whether a character is an alphabet,a digit,or a special character"<<endl;
    char ch;
    cout<<"Enter a character: ";
    cin>>ch;
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')){
        cout<<ch<<" is an Alphabet"<<endl;
    }
    else if(ch>='0'&& ch<='9'){
        cout<<ch<<" is a Digit"<<endl;
    }
    else{
        cout<<ch<<" is a Special character"<<endl;
    }
    return 0;
}