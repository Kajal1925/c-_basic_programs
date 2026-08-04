#include<iostream>
using namespace std;

struct student
{
    int rollNo;
    char name[30];
    float cgpa;
};
int main(){
    student s;
    
    cout<<"Enter Roll Number: ";
    cin>>s.rollNo;

    cin.ignore();// used before getline() to remove the newline left by cin..

    cout<<"Enter Name: ";
    cin.getline(s.name, 30);

    cout<<"Enter CGPA: ";
    cin>>s.cgpa;

    cout<<"\nStudent Details\n";
    cout<<"Roll Number: "<<s.rollNo<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"CGPA: "<<s.cgpa<<endl;

    return 0;
}
