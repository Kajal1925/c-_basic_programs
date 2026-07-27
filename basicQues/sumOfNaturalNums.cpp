#include<iostream>
using namespace std;

int main(){
    cout<<"To print sum of first natural numbers"<<endl;
    int n,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum is: "<<sum;
    return 0;
}