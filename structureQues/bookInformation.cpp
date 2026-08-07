#include<iostream>
#include<string>
using namespace std;

struct books{
    int bookId;
    char bookName[50];
    char bookAuthor[50];
    float price;
};

int main(){
    struct books b[5];
    //input details
    cout<<"\nBook details\n"<<endl;
    for(int i = 0; i<5; i++){
        cout<<"Enter details of book"<<i+1<<endl;
        cout<<"Book ID : "<<endl;
        cin>>b[i].bookId;

        cin.ignore();

        cout<<"Book Name : "<<endl;
        cin.getline(b[i].bookName, 50);

        cout<<"Book Author : "<<endl;
        cin.getline(b[i].bookAuthor, 50);

        cout<<"Book Price : "<<endl;
        cin>>b[i].price;
    }
    //display the details
    cout<<"\nBook details\n"<<endl;
    for(int i = 0; i<5; i++){
        cout<<"Details of book "<<i+1<<endl;
        cout<<"Book ID: "<<b[i].bookId<<endl;
        cout<<"Book Name: "<<b[i].bookName<<endl;
        cout<<"Book Author: "<<b[i].bookAuthor<<endl;
        cout<<"Book Price: "<<b[i].price<<endl;
    }
    return 0;
}