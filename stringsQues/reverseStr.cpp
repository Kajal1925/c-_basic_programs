#include<iostream>
using namespace std;

int main(){
    char str1[100], str2[100];
    int i = 0, j = 0;
    cout<<"Enter the string: ";
    cin.getline(str1, 100);

    while(str1[i] != '\0'){
        i++;
    }
    i--;// because when i becomes 5 that position is occupied by null character(\0),so it will start copying the string from null character to avoid that we have to take i one iteration back
    while(i >= 0){
        str2[j] = str1[i];
        i--;
        j++;
    }
    str2[j] = '\0';
    cout<<"Rversed String: "<<str2;
    
    return 0;
    
}