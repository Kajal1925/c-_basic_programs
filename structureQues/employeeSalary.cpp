#include<iostream>
using namespace std;

struct employee{
    int id;
    char name[30];
    float salary;
};

int main(){
    struct employee ep[5];
    //input details;
    for(int i = 0; i<5; i++){
        cout<<"\nEnter details of employee "<<i+1<<endl;
        cout<<"Employee ID : ";
        cin>>ep[i].id;

        cin.ignore();

        cout<<"Name : ";
        cin.getline(ep[i].name, 30);

        cout<<"Salary : ";
        cin>>ep[i].salary;
    }
    //display salary details of employee
    for(int i = 0; i<5; i++){
        cout<<"\nSalary details of employee "<<i+1<<endl;
        cout<<"Employee ID: "<<ep[i].id<<endl;
        cout<<"Salary: "<<ep[i].salary<<endl;
    }
    return 0;
}