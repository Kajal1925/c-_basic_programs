#include<iostream>
using namespace std;

struct employee{
    int id;
    char name[30];
    float salary;
}ep ;
int main(){
    struct employee ep[3];
    //input details
    for(int i = 0; i<3; i++){
        cout<<"\nEnter details of employee "<<i+1<<endl;
        cout<<"Employee Id : ";
        cin>>ep[i].id;

        cin.ignore();

        cout<<"Name : ";
        cin.getline(ep[i].name, 30);

        cout<<"Salary : ";
        cin>>ep[i].salary;
    }
    //display details
    for(int i = 0; i<3; i++){
        cout<<"\nDetails of employee "<<i+1<<endl;
        cout<<"Employee ID: "<<ep[i].id<<endl;
        cout<<"Name: "<<ep[i].name<<endl;
        cout<<"Salary: "<<ep[i].salary<<endl;
    }
    return 0;
}

