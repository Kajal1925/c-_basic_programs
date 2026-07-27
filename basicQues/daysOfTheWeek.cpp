#include<iostream>
using namespace std;

int main(){
    cout<<"To display days of the week based on numbers(1-7)"<<endl;
    int day;
    cout<<"Enter a number (between 1-7): "<<endl;
    cin>>day;
    switch(day){
        case 1: 
          cout<<"It's Monday"<<endl;
          break;
        case 2:
          cout<<"It's Tuesday"<<endl;
          break;
        case 3:
          cout<<"It's Wednesday"<<endl;
          break;
        case 4:
          cout<<"It's Thrusday"<<endl;
          break;
        case 5:
          cout<<"It's Friday"<<endl;
          break;
        case 6:
          cout<<"It's Saturday"<<endl;
          break;
        case 7:
          cout<<"It's Sunday :)"<<endl;
          break;
        default:
          cout<<"Invalid Input!!!"<<endl;
    }
    return 0;
}