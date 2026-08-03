#include<iostream>
using namespace std;

int main(){
    char str[100];
    int i, j, count;
    bool visited[100] = {false};

    cout<<"Enter the string: ";
    cin.getline(str, 100);

    for(i = 0; str[i] != '\0'; i++){
        if(visited[i] == true || str[i] == ' '){
            continue;
        }
        count = 1;
        for(j = i+1; str[j] != '\0'; j++){
            if(str[i] == str[j]){
                count ++;
                visited[j] = true;
            }
        }
        cout<<str[i]<<" = "<<count<<endl;
    }

   

    return 0;
}