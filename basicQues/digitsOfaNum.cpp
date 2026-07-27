#include<iostream>
using namespace std;

int main(){
     cout<<"To count digits of a number"<<endl;
     int num;
     int count=0;
     cout<<"Enter a number: ";
     cin>>num;
     if(num==0){
        return 1;
     }
     for(int i=num;i !=0;i=i/10){
       count++;
     }
     cout<<"There are "<<count<<" digits"<<endl;
     return 0;
}