#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"To check the number is even or odd"<<endl;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"The numberr is EVEN"<<endl;
    }
    else{
        cout<<"The number is ODD"<<endl;
    }
    return 0;
}