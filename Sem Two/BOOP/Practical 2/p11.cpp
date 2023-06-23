#include <iostream>
using namespace std;


int main() {
    int num;
    long int fact = 1;

    cout<<"Enter the number: ";
    cin>>num;
    
    if (num == 0)
        fact = 0;
    
    while(num > 0){
        fact*=num;
        num--;
    }

    cout<<"Factorial: "<<fact<<endl;
    
    return 0;
}