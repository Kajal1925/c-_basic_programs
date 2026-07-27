#include<iostream>
using namespace std;

int main(){
    cout<<"To print odd numbers from 1 to 100 using loops"<<endl;
    int i=1;
    // for(i=1;i<=100;i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     else{
    //         cout<<i<<endl;
    //     }
    // }

    // while(i<=100){
    //     if(i%2 != 0){
    //         cout<<i<<endl;
    //     }
    //     else{
         
    //     }
    //     i++;
    // }

    do{
        if(i%2 == 1){
            cout<<i<<endl;
        }
        else{

        }
        i++;
    }while(i<=100);
    
    return 0;
}