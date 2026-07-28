#include<iostream>
using namespace std;

int main(){
    int arr[5], temp;
    cout<<"Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<5-1; i++){
        for(int j=0; j<5-1-i; j++){
            if(arr[j]> arr[j+1]){
                temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Array in ascending order: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
