#include<iostream>
using namespace std;

int main(){
    char str[100];
    char *start, *end, temp;
    int i = 0, length = 0;

    cout<<"Enter a string: ";
    cin.getline(str, 100);

    while(str[length] != '\0'){
        length ++;
    }

    start = str;
    end = str + (length -1);

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start ++;
        end --;
    }

    cout<<"Reversed string: ";
    cout<<str;

    return 0;
}