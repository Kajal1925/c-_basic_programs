#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int *start, *end, n,  temp;
    cout<<"Enter the number of elements(1-10): ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    start = arr;
    end = arr + (n-1);

    while(start<end){
        temp = *start;
        *start = *end;
        *end = temp;

        start ++;
        end --;
    }

    cout<<"Reversed Array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}