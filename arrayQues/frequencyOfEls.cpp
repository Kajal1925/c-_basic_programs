#include<iostream>
using namespace std;

int main(){
    int arr[5];
   
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    cout<<"The frequency of each element: ";
    for(int i=0; i<5; i++){
         int count=1;
        if(arr[i] == -1){
            continue;
        }
        for(int j=i+1; j<5; j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1;
            }
        }
         cout<<arr[i]<<" = "<<count<<endl;
    }

    return 0;
}