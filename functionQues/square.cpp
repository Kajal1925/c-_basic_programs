#include<iostream>
using namespace std;

float square(float num){
    return num*num;
}
int main(){
    float num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Square of "<<num<<" = "<<square(num);
    return 0;
}