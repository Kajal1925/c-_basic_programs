#include<iostream>
using namespace std;

struct students{
    int rollNo;
    char name[30];
    float cgpa;
};

int main(){
    struct students s[5];

    //input details
    for(int i = 0; i<5; i++){
        cout<<"\nEnter details of Student "<<i+1<<endl;
    
        cout<<"Roll Number: ";
        cin>>s[i].rollNo;

        cin.ignore();

        cout<<"Name: ";
        cin.getline(s[i].name, 30);

        cout<<"CGPA: ";
        cin>>s[i].cgpa;
    }

    //display details
    for(int i = 0; i<5; i++){
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll Number: "<<s[i].rollNo<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"CGPA: "<<s[i].cgpa<<endl;
    }
    return 0;
}