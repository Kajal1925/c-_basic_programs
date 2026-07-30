#include<iostream>
using namespace std;

int main(){
    char str[100];
    int vowels = 0, consonants = 0, i = 0;
    
    cout<<"Enter the string: ";
    cin.getline(str, 100);

    while(str[i] != '\0'){
        if((str[i] >= 'A' && str[i] <= 'Z')||(str[i] >= 'a' && str[i] <= 'z')){
          if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
            vowels ++;
          }
          else{
            consonants ++;
          }
        }
        i++;
    }
    cout<<"Vowles: "<<vowels<<endl;
    cout<<"Consonants: "<<consonants<<endl;
    return 0;
}