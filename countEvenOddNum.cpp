#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n, countEven=0, countOdd=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            countEven++;
        }
        if(arr[i]%2 != 0){
            countOdd++;
        }
    }
    cout<<"The numbers of even elements = "<<countEven<<endl;
    cout<<"The numbers of odd elements = "<<countOdd<<endl;
    return 0;
}