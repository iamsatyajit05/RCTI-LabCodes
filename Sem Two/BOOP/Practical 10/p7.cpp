#include <iostream>
using namespace std;

class demo {
    int x;
    public:
        demo(int a) {
            x = a;
        }
        void display() {
            cout<<"Value is "<<x;
        }
        ~demo() {
            cout<<"Object is destroyed"<<endl;
        }
};

int main() {
    demo a(5), b(10);
    a.display();
    b.display();

    return 0;
}