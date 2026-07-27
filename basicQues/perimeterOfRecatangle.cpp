#include<iostream>
using namespace std;

int main(){
    float l,b,perimeter;
    cout<<"Enter the length of rectangle : "<<endl;
    cin>>l;
    cout<<"Enter the breadth of rectangle: "<<endl;
    cin>>b;
    perimeter=2*(l+b);
    cout<<"The perimeter of the rectangle is : "<<perimeter;cout<<"m"<<endl;
    return 0;
}