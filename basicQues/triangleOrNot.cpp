#include<iostream>
using namespace std;

int main(){
    cout<<"To check whether three sides can form a triangle"<<endl;
    int a,b,c;
    cout<<"Enter sides of the triangle: ";
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout<<"The given sides can form a triangle."<<endl;
    }
    else{
        cout<<"The given sides cannot form a triangle."<<endl;
    }
    return 0;
}