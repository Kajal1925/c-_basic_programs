#include <iostream>
using namespace std;

int main(){
    int arr[7];
    
    cout<<"Enter 7 elements: ";
    for(int i=0; i<7; i++){
        cin>>arr[i];
    }
    cout<<"The duplicate elements are: ";
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
    
    return 0;
}