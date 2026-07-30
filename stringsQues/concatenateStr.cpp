#include<iostream>
using namespace std;

int main(){
    char str1[100], str2[100];
    cout<<"Enter the first string: ";
    cin.getline(str1, 100);
    cout<<"Enter the second string: ";
    cin.getline(str2, 100);

    int i=0;
    int j=0;
    
    // find the end of the first string
    while(str1[i] != '\0'){
        i++;
    }
    //copy second string to the end of the first string
    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    
    cout<<"Conactenated String: "<<str1;

    return 0;
}