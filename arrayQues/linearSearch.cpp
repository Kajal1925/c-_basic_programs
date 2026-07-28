#include<iostream>
using namespace std;

int main(){
    int arr[100],n,key,found=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search: ";
    cin>>key;
    for(int i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"Element "<<arr[i]<<" is found at position "<<i+1;
            found = 1;
            break;
        }
    }
    if(!found){
        cout<<"Element "<<key<<" is not found";
    }
    return 0;
}