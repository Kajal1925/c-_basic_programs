#include<iostream>
using namespace std;

int main(){
    cout<<"To print multiplication tabel of a number"<<endl;
    int n,k;
    cout<<"Enter the number you to want a multiplication tabel of: ";
    cin>>n;
    cout<<"Enter the number till which you want the multiplication tabel:";
    cin>>k;
    for(int i=1;i<=k;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}