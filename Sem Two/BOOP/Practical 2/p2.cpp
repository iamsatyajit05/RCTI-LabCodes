#include <iostream>
using namespace std;

int main() {
    int a, b, c, avg;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    avg = (a+b+c) / 3;
    cout<<"Average of "<<a<<", "<<b<<", "<<c<<" is "<<avg;

    return 0;
}