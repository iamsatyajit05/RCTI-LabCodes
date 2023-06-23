#include <iostream>
using namespace std;

inline int product(int a, int b){
    return a*b;
}

int main() {
    int a, b;
    
    cout<<"Enter the 2 numbers: ";
    cin>>a>>b;

    cout<<a<<" x "<<b<<" = "<<product(a, b);

    return 0;
}