#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int position, element;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"Enter position: "<<endl;
    cin>>position;
    cout<<"Enter the element: "<<endl;
    cin>>element;
    // shift elements at left
    for(int i=position-1; i<5-1; i++){
        arr[i]=arr[i+1];
    }
    //print the array
    for(int i=0; i<4; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}