#include<iostream>
using namespace std;

struct students{
    int rollNo;
    char name[30];
    float marks;
};
int main(){
    struct students s[5];

    for(int i= 0; i<5; i++){
        cout<<"\nenter details of Student "<<i+1<<endl;
        cout<<"Roll Number : ";
        cin>>s[i].rollNo;

        cin.ignore();

        cout<<"Name : ";
        cin.getline(s[i].name, 30);

        cout<<"Marks : ";
        cin>>s[i].marks;
    }
    //sorting in descending order
    for(int i = 0; i<5; i++){
        for(int j = 0; j<4-i; j++){
            if(s[j].marks < s[j+1].marks){
                int temp = s[j].marks;
                s[j].marks = s[j+1].marks;
                s[j+1].marks = temp;
            }
        }
    }
    //display
    cout<<"\nStudents Sorted by Marks(Descending)\n";
    for(int i = 0; i<5; i++){
        cout<<"\nStudent "<<i+1<<endl;
        cout<<"Roll Number: "<<s[i].rollNo<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }
    return 0;
}
