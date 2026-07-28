#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sum=0;
    
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"The sum of elements = ";
    for(int i=0; i<5; i++){
        sum += arr[i]; 
    }
    cout<<sum<<" ";
    return 0;

}
