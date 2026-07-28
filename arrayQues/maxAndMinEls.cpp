#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int max, min;
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    max = arr[0];
    min = arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Maximum Element: "<<max<<endl;
    cout<<"Minimum Element: "<<min<<endl;
    return 0;
}