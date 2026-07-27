#include<iostream>
using namespace std;

int main(){
    int min,hour,remaining_min;
    cout<<"Chnaging minutes into hours"<<endl;
    cout<<"Enter time in minutes : "<<endl;
    cin>>min;
    hour=min/60;
    remaining_min=min%60;
    cout<<"Hours : "<<hour<<endl;
    cout<<"Remaining Minutes : "<<remaining_min<<endl;
    return 0;
}