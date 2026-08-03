#include<iostream>
using namespace std;


struct Student{
    int rollNo;
    char name[30];
    float marks;
};

int main(){
    Student s;
    Student *ptr;

    ptr = &s;

    cout<<"Enter Roll Number: ";
    cin>>ptr->rollNo;

    cin.ignore();

    cout<<"Enter Name: ";
    cin.getline(ptr->name, 30);

    cout<<"Enter Marks: ";
    cin>>ptr->marks;

    cout<<"\nStudent Details\n";
    cout<<"Roll Number: "<<ptr->rollNo<<endl;
    cout<<"Name: "<<ptr->name<<endl;
    cout<<"Marks: "<<ptr->marks<<endl;

    return 0;
}