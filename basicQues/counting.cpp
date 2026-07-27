#include<iostream>
using namespace std;

int main(){
    cout<<"To print numbers using loops"<<endl;
    int i;
    for(i=1;i<=10;i++){
        cout<<i<<endl;
    };
    while(i<=20){
        cout<<i<<endl;
        i++;
    };
    do{
        cout<<i<<endl;
        i++;
    }while(i<=30);
    return 0;

}