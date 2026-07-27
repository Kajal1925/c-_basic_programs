#include<iostream>
using namespace std;

float cube(float num){
    return num*num*num;
}
int main(){
    float num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Cube of "<<num<<" = "<<cube(num);
    return 0;
}