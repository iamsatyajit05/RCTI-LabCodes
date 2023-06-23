#include <iostream>
using namespace std;

float area(int r, float pi = 3.14){
    return pi * r * r;
}

int main() {
    int radius;

    cout<<"Enter the radius: ";
    cin>>radius;

    cout<<"Area of circle is "<<area(radius)<<" unit square";

    return 0;
}