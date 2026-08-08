#include<iostream>
#include<string>
using namespace std;

struct students{
    int rollNo;
    char name[10];
    float marks;
};

int main(){
    struct students s[5];
    float avg;
    float sum = 0.0;
    //input
    for(int i = 0; i<5; i++){
        cout<<"\nEnter details of Student "<<i+1<<endl;

    cout<<"Roll Number: ";
    cin>>s[i].rollNo;
    cin.ignore();

    cout<<"Name: ";
    cin.getline(s[i].name, 10);

    cout<<"Marks: ";
    cin>>s[i].marks;

    sum = sum +s[i].marks;
    }
    avg = sum/5.0;
    cout<<"\nAverage Marks = "<<avg;

    return 0;
}
