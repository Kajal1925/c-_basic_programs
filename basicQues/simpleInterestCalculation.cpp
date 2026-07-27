#include<iostream>
using namespace std;

int main(){
    float principle,rate,time,simple_interest;
    cout<<"Calculating simple interest"<<endl;
    cout<<"Enter the amount : "<<endl;
    cin>>principle;
    cout<<"Enter the rate : "<<endl;
    cin>>rate;
    cout<<"Enter the time(anual) : "<<endl;
    cin>>time;
    simple_interest=(principle*rate*time)/100;
    cout<<"The simple interest will be: "<<simple_interest<<endl;
    cout<<"The total amount to be repaid will be: "<<principle+simple_interest<<endl;
    return 0;
}