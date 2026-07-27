#include<iostream>
using namespace std;

int main(){
    cout<<"Identify the type of triangle"<<endl;
    int a,b,c;
    cout<<"Enter the three sides: ";
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        if((a==b)&&(b==c)){
            cout<<"The triangle is Equilateral."<<endl;
        }
        else if((a==c)||(a==b)||(b==c)){
            cout<<"The triangle is Isosceles."<<endl;
        }
        else{
            cout<<"The triangle is Scalene."<<endl;
        }
    }
    else{
        cout<<"The given sides cannot form a triangle."<<endl;
    }
    return 0;
}