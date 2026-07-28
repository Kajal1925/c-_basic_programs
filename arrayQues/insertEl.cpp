#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int position, element;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Enter the position: ";
    cin>>position;
    cout<<"Enter the element: ";
    cin>>element;
    
    //shift the elements to the right;
    for(int i=5; i>=position; i--){
        arr[i]= arr[i-1];
    }
    arr[position - 1]= element;
    //print the array
    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}