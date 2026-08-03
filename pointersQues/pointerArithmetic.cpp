#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr;

    cout<<"Initial Value: "<<*ptr<<endl;

    ptr++;
    cout<<"After ptr++ : "<<*ptr<<endl;

    ptr--;
    cout<<"After ptr-- : "<<*ptr<<endl;

    ptr = ptr + 2;
    cout<<"After ptr + 2 : "<<*ptr<<endl;

    ptr = ptr - 1;
    cout<<"After ptr - 1 : "<<*ptr<<endl;

    return 0;
}