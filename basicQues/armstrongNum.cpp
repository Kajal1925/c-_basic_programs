#include <iostream>
using namespace std;

int main(){
    cout<<"To check whether a number is an armstrong number or not"<<endl;
    int num,og_num,digit;
    int count=0;
    int power=1;
    int result=0;
    
    cout<<"Enter a number: ";
    cin>>num;
    
    og_num=num;
    while(og_num != 0){
        count++;
        og_num=og_num/10;
    }
    cout<<" number of digits: "<<count<<endl;

    og_num=num;
    while(og_num !=0 ){
        digit= og_num%10;
        for(int i=0; i< count; i++){
            power=  power*digit;}
            result= result+power;
            power=1;
            og_num=og_num/10;
        }
        if(result==num){
            cout<<num<<" is an ARMSTRONG number";
        }
        else{
            cout<<num<<" is NOT an armstrong number";
        }
        return 0;
    }