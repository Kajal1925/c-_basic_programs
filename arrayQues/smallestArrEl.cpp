#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int smallest;

    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    smallest = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    cout<<"Smallest element = "<<smallest;
    return 0;
}