#include<iostream>
using namespace std;

int main(){
    cout<<"To print all the factors of a number"<<endl;
    int num;
    int factor=1;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factors of "<<num<<" are: "<<endl;
    for(int i=1; i<=num; i++){
        if(num%i==0){
            factor=i;
            cout<<factor<<endl;
        }
    }
    return 0;
}