#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int largest, secondLargest;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    largest = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    secondLargest = arr[0];
    for(int i=0; i<5; i++){
        if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest = arr[i];
        }
    }
    cout<<"The largest element = "<<largest<<endl;
    cout<<"The second largest element = "<<secondLargest<<endl;
    return 0;
}