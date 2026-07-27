#include <iostream>
using namespace std;

void printFibonacciSeries(int n) {
    if (n <= 0) {
        cout << "Please enter a positive integer." <<endl;
        return;
    }

    int first = 0, second = 1;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; ++i) {
        cout << first << " ";
        
        int next = first + second;
        first = second;
        second = next;
    }
    cout<<endl;
}

int main() {
    int terms;
    cout<<"Enter number of terms: ";
    cin>> terms;
    printFibonacciSeries(terms);
    return 0;
}
