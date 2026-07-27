#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"To check whether a character is a vowel or consonant"<<endl;
    cout<<"Enter a charachter: "<<endl;
    cin>>ch;

    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<ch<<" is a VOWEL "<<endl;
    }
    else{
        cout<<ch<<" is a CONSONANT "<<endl;
    }
    return 0;

}