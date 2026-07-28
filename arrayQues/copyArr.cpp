#include<iostream>
using namespace std;

int main(){
    int arr1[5], arr2[5];
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<5; i++){
        arr2[i] = arr1[i];
    }

    cout<<"Elements of second array = ";
    for(int i=0; i<5; i++){
        cout<<arr2[i]<<" ";
    }
    return 0;

}