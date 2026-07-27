#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"To find absolute number"<<endl;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(num<0){
        num=-num;
        cout<<"Absolute number: "<<num<<endl;
    }
    else{
        cout<<"Absolute number: "<<num<<endl;
    }
    return 0;
}