#include<iostream>
using namespace std;

int main(){
    int arr[10], copied[10], n;
    int *ptr1, *ptr2;
    cout<<"Enter the number of elements(1-10): ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    ptr1 = arr;
    ptr2 = copied;
    
    // copy elements
    for(int i=0; i<n; i++){
        *ptr2 = *ptr1 ;
        ptr1 ++;
        ptr2 ++;
    }
    // print the array
    cout<<"The copied array: ";
    for(int i=0; i<n; i++){
        cout<<copied[i]<<" ";
    }
    return 0;

}