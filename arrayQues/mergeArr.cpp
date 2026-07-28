#include<iostream>
using namespace std;

int main(){
    int arr1[5],arr2[5],arr3[10];
    cout<<"Enter 5 elements for array1: ";
    for(int i=0; i<5; i++){
        cin>>arr1[i];
    }
    cout<<"Enter 5 elements for array2: ";
    for(int i=0; i<5; i++){
        cin>>arr2[i];
    }

    for(int i=0; i<5; i++){
        arr3[i] = arr1[i];
    }
    for(int i=0; i<5; i++){
        arr3[i+5] = arr2[i];
    }
    cout<<"The merged array is: ";
    for(int i=0; i<10; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}