#include <iostream>

using namespace std;

class Demo {
    int x;
    public:
        void getx() {
            cout<<"Enter the value of x: ";
            cin>>x;
        }
        void display() {
            cout<<"The value of x is "<<x;
        }
};

int main() {
    Demo p;
    p.getx();
    p.display();

    Demo *q = new Demo;
    q->getx();
    q->display();

    delete q;
}