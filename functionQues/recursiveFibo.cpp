#include<iostream>
using namespace std;

int fibo(int n){
  if(n<=1){
    return n;
  }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int num;
    cout<<"Enter the number of terms: ";
    cin>>num;
    if(num==0){
        cout<<"Enter positive number(1-n)"<<endl;
    }
    else{
    cout<<"Fibonacci series: "<<endl;
    for(int i=0; i<num; i++){
        cout<<fibo(i)<<" ";
    }
    }
    return 0;
}