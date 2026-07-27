#include<iostream>
using namespace std;

int main(){
    float sub1,sub2,sub3,sub4,sub5,total,percent;
    cout<<"The toatl marks and percentage of 5 subjects"<<endl;
    cout<<"Enter marks of subject 1(out of 100) : "<<endl;
    cin>>sub1;
    cout<<"Enter marks of subject 2(out of 100) : "<<endl;
    cin>>sub2;
    cout<<"Enter marks of subject 3(out of 100) : "<<endl;
    cin>>sub3;
    cout<<"Enter marks of subject 4(out of 100) : "<<endl;
    cin>>sub4;
    cout<<"Enter marks of subject 5(out of 100) : "<<endl;
    cin>>sub5;
    total=sub1+sub2+sub3+sub4+sub5;
    percent=(total/500)*100;
    cout<<"The total marks of five subjects are: "<<total<<endl;
    cout<<"The percent of five subjects is : "<<percent;cout<<"%"<<endl;
    return 0;
}