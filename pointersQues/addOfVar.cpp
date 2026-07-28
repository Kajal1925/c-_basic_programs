#include<iostream>
using namespace std;
int main(){
    int num = 50;
    int *ptr = &num;
    cout<<"The address of num: "<<ptr<<endl;
    cout<<&ptr;
    return 0;
}