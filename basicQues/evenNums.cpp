#include<iostream>
using namespace std;

int main(){
    cout<<"To print even numbers from 1 to 100 using loops"<<endl;
    int i;
    for(i=2;i<=100;i++){
        if(i%2==0){
            cout<<i<<endl;
        }
        else{
            continue;
        }
    }
    return 0;
}