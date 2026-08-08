#include<iostream>
#include<string>
using namespace std;

struct students{
    int rollNo;
    char name[10];
    int age;
};

int main(){
    struct students s[5];
    int oldest = 0;
    //input details
    for(int i = 0; i<5; i++){
        cout<<"\nEnter details of Student "<<i+1<<endl;
        cout<<"Roll Number: ";
        cin>>s[i].rollNo;
        cin.ignore();
        cout<<"Name: ";
        cin.getline(s[i].name, 10);
        cout<<"Age: ";
        cin>>s[i].age;
    }
    //find the oldest student
    for(int i = 0; i<5; i++){
        if(s[i].age > s[oldest].age){
            oldest = i;
        }
    }
    //display
    cout<<"\nOldest Student"<<endl;
    cout<<"Roll Number: "<<s[oldest].rollNo<<endl;
    cout<<"Name: "<<s[oldest].name<<endl;
    cout<<"Age: "<<s[oldest].age<<endl;

    return 0;
}