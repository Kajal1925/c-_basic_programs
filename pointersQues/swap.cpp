#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"------Before Swapping------ "<<endl;
    cout<<"First number: "<<num1<<endl;
    cout<<"Second number: "<<num2<<endl;

    cout<<"------After Swapping------ "<<endl;
    swap(&num1, &num2);
    cout<<"First number: "<<num1<<endl;
    cout<<"Second number: "<<num2<<endl;

    return 0;
}