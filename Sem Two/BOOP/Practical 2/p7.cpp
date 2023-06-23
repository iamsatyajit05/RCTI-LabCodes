#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;
    
    cout<<"Enter the number: ";
    cin>>num;

    if(num == 0 || num == 1)
        isPrime = false;

    for(int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
        cout<<num<<" is a prime number";

    else
        cout<<num<<" is not a prime number";

    return 0;
}