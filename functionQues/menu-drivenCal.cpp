#include <iostream>
using namespace std;

void add(float a, float b);
void subtract(float a, float b);
void multiplication(float a, float b);
void division(float a, float b);

int main(){
    float num1, num2; 
    int choice;

    cout<<"====== Calculator Menu ======"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction" <<endl;
    cout<<"3. Multiplication "<<endl;
    cout<<"4. Division "<<endl;
    cout<<"5. Exit"<<endl;

    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice >=1 && choice<= 4){
        cout<<"Enter two numbers: ";
        cin>>num1>>num2;
    }
    switch(choice){
        case 1:
        add(num1, num2);
        break;

        case 2:
        subtract(num1, num2);
        break;

        case 3:
        multiplication(num1, num2);
        break;

        case 4:
        division(num1, num2);
        break;

        case 5:
        cout<<"Thank you";
        break;

        default:
        cout<<"Invalid Input";
    }
    return 0;
}
void add(float a, float b){
    cout<<"Addition = "<<a+b;
}
void subtract(float a, float b){
    cout<<"Subtraction = "<<a-b;
}
void multiplication(float a, float b){
    cout<<"Multiplication = "<<a*b;
}
void division(float a, float b){
    if(b !=0){
        cout<<"Division = "<<a/b;
    }
    else{
        cout<<"Division by sero is not possible.";
    }
}