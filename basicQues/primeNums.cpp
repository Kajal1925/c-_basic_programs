#include<iostream>
using namespace std;

int main(){
    cout<<"To print prime numbers from 1 to n"<<endl;
    int n,i,prime=1;
    cout<<"Enter a number(the ending range): ";
    cin>>n;

    for(i=1; i<=n; i++){
        if(i<=2){
            continue;
        }
        for(int j=2; j<=(i/2); j++){
            if(i%j==0){
                prime=0;
                break;
            }
            else{
                prime=1;
            }
        }
        if(prime==1){
            cout<<i<<endl;
        }
    }
    return 0;
   
    }
    
