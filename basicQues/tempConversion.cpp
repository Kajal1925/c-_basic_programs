#include<iostream>
using namespace std;

int main(){
    double celsius,fahrenheit;
    cout<<"Enter temprature in celsius (degree C): "<<endl;
    cin>>celsius;
    fahrenheit=(celsius*9.0/5.0)+32;
    cout<<"Temprature in fahrenheit is: "<<fahrenheit<<endl;

    return 0;

}