#include<iostream>
#include<string>
using namespace std;

struct products{
    int productId;
    char productName[30];
    float price;
};

int main(){
    struct products p[5];
    //input details
    for(int i = 0; i<5; i++){
        cout<<"Enter details of the product "<<i+1<<endl;
        cout<<"Product Id: ";
        cin>>p[i].productId;

        cin.ignore();

        cout<<"Product Name: ";
        cin.getline(p[i].productName, 30);

        cout<<"Product Price: ";
        cin>>p[i].price;
    }
    //display the detials
    cout<<"\nProduct Details\n"<<endl;
    for(int i = 0; i<5; i++){
        cout<<"Product "<<i+1<<endl;
        cout<<"Product ID: "<<p[i].productId<<endl;
        cout<<"Product Name: "<<p[i].productName<<endl;
        cout<<"Product Price: "<<p[i].price<<endl;
    }
    return 0;
}