#include<iostream>
using namespace std;

int reverseArr(int arr[], int n){
    int i, firstValue, lastValue;
    for(i=0; i<n/2; i++){
        firstValue = arr[i];
        lastValue = arr[n-i-1];
        arr[i] = lastValue;
        arr[n-i-1] = firstValue;
    }
    return 0;
}
void displayArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int n, arr[100];
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArr(arr, n);
    displayArr(arr, n);
    return 0;
}