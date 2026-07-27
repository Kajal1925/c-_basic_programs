#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Checking weather a year is leap year or not"<<endl;
    cout<<"Enter the year: "<<endl;
    cin>>year;
    if((year%400==0)||((year%4==0)&&(year%100!=0))){
        cout<<year<<" is a LEAP year"<<endl;
    }
    else{
        cout<<year<<" is NOT a leap year"<<endl;
    }
    return 0;
}