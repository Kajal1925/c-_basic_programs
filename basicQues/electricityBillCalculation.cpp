#include<iostream>
using namespace std;

int main(){
    cout<<"To find electricity bill based on the number of units consumed"<<endl;
    cout<<"Billing Rates:"<<endl;
    cout<<"First 100 units= 1.50 rupees per unit"<<endl;
    cout<<"Next 100 units(101-200)= 2.50 rupees per unit"<<endl;
    cout<<"Above 200 units= 3.50 rupees per unit"<<endl;
    int units;
    float bill;
    cout<<"Enter the number of units consumed: "<<endl;
    cin>>units;
    if(units<=100){
        bill= units*1.50;
    }
    else if(units<=200){
        bill=(100*1.50)+((units-100)*2.50);
    }
    else {
        bill=(100*1.50)+(100*2.50)+((units-200)*3.50);
    }
    cout<<"Electricity Bill: "<<bill;
    return 0;

}