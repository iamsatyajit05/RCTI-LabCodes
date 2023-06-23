#include <iostream>
using namespace std;

int i = 11;

int main() {
    int i = 5;

    cout<<"Local i: "<<i<<endl;
    cout<<"Global i: "<<::i<<endl;
    return 0;
}