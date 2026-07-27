#include<iostream>
using namespace std;

int main(){
    cout<<"To print reverse numbers using loops"<<endl;
    int i;
    for(i=10;i>=1;i--){
        cout<<i<<endl;
    };
    while(i>=-20){
        cout<<i<<endl;
        i--;
    };
    do{
        cout<<i<<endl;
        i--;
    }while(i>=-30);
    return 0;
}