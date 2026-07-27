#include<iostream>
#include<cmath>
using namespace std;

int main(){
    cout<<"To find roots of quadratic equation"<<endl;
    float a,b,c,D,root1,root2;
    cout<<"Enter the value of a,b and c: ";
    cin>>a>>b>>c;
    D=(b*b)-(4*a*c);
    if(D>0){
        root1=(-b+ sqrt(D))/(2*a);
        root2=(-b- sqrt(D))/(2*a);
        cout<<"Root 1= "<<root1<<endl;
        cout<<"Root 2= "<<root2<<endl;
    }
    else if(D==0){
        root1=-b/(2*a);
        cout<<"Both roots are equal."<<endl;
        cout<<"Root = "<<root1<<endl;
    }
    else{
        cout<<"The roots are imaginary(no real roots)."<<endl;
    }
    return 0;
}