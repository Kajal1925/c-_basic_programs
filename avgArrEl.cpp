#include<iostream>
using namespace std;

int main(){
    int arr[5];
    float avg;
    int sum=0;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
        sum += arr[i];
    }
    avg = sum/5.0; // or avg = (float)sum/5;
    cout<<"The average of array elements = "<<avg;
    return 0;  
}