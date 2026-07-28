#include<iostream>
using namespace std;

int main(){
    int matrix[5][5], transpose[5][5];
    cout<<"Enter elements of the matrix: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cin>>matrix[i][j];
        }
    }
    //transposing of matrix
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            transpose[i][j] = matrix[j][i];
        }
    }
    //print transpose matrix;
    cout<<"Transpose of the matrix: ";
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}