#include<iostream>
using namespace std;

int main(){
    int arr[10], n;
    int sum = 0;
    int *ptr;

    cout<<"Enter the number of elements(1-10): ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ptr = arr;
   
    for(int i=0; i<n; i++){
        sum = sum + *ptr;
        ptr++;
    }
    cout<<"Sum of the array  elements: "<<sum;
    return 0;
}