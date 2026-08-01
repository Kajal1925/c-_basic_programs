#include<iostream>
using namespace std;

int main(){
    char str1[100], str2[100];
    int count1 = 0, count2 = 0;
    
    cout<<"Enter first string: ";
    cin.getline(str1, 100);

    cout<<"Enter second string: ";
    cin.getline(str2, 100);

    while(str1[count1] != '\0'){
        count1 ++;
    }
    while(str2[count2] != '\0'){
        count2 ++;
    }

    if(count1 != count2){
        cout<<"Not Anagrams";
        return 0;
    }
    for(int i = 0; i < count1; i++){
        int found = 0;

        for(int j = 0; j < count2; j++){
            if(str1[i] == str2[j]){
                found = 1;
                str2[j] = '*';
                break;
            }
        }
        if(found == 0){
            cout<<"Not Anagrams";
            return 0;
        }
    }
    cout<<"The strings are anagrams";
    
    return 0;
}