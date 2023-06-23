#include <iostream>
using namespace std;

class demo {
    public:
        demo() {
            cout<<"Constructor Called"<<endl;
        }
        ~demo() {
            cout<<"Destructor Called"<<endl;
        }
};

int main() {
    cout<<"Main Function Start"<<endl;
    demo d;
    cout<<"Main Function Ends"<<endl;
    
    return 0;
}