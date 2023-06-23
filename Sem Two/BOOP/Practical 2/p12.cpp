#include <iostream>
using namespace std;

int main() {
    int num, actualNum, parNum = 0;

    cout<<"Enter the number: ";
    cin>>num;
    actualNum = num;
    
    while (num > 0) {
        int temp = num%10;
        parNum = (parNum * 10) + temp;
        num/=10;
    }

    if (actualNum == parNum)
        cout<<actualNum<<" is a palindrome number";
    
    else
        cout<<actualNum<<" is not a palindrome number";

    return 0;
}