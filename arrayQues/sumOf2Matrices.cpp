#include<iostream>
using namespace std;

int main(){
    int matrix1[5][5], matrix2[5][5], sum[5][5];
    cout<<"Enter elements of first matrix: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>matrix2[i][j];
        }
    }
    // adding the matrices
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    cout<<"Sum of the matrices: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}