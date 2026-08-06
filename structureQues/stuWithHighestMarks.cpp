#include<iostream>
using namespace std;

struct students{
    int rollNo;
    char name[30];
    float marks;
};

int main(){
    struct students s[5];
    int maxIndex = 0;

    //input details
    for(int i = 0; i<5; i++){
        cout<<"\nEnter details of Student "<<i+1<<endl;
        cout<<"Roll Number : ";
        cin>>s[i].rollNo;

        cin.ignore();

        cout<<"Name : ";
        cin.getline(s[i].name, 30);

        cout<<"Marks : ";
        cin>>s[i].marks;
    }
    //fing highest marks
    for(int i = 0; i<5; i++){
        if(s[i].marks > s[maxIndex].marks){
            maxIndex = i;
        }
    }
    //display topper
    cout<<"\nStudent with Highest Marks\n";
    cout<<"Roll Number: "<<s[maxIndex].rollNo<<endl;
    cout<<"Name: "<<s[maxIndex].name<<endl;
    cout<<"Marks: "<<s[maxIndex].marks<<endl;

    return 0;
}
