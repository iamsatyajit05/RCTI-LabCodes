#include<iostream>

using namespace std;

class floatnum;

class intnum {
    int x;

    public:
        void enternum() {
            cout << "Enter the value: ";
            cin >> x;
        }
        
        void getvalue() {
            cout << x;
        }
        
        friend void add(intnum a, floatnum b);
};

class floatnum {
    float y;

    public:
        void enternum() {
            cout << "Enter the value: ";
            cin >> y;
        }

        void getvalue() {
            cout << y;
        }

        friend void add(intnum a, floatnum b);
};

void add(intnum a, floatnum b) {
    cout << "Addition is " << a.x + b.y;
}

int main() {
    intnum i;
    floatnum f;

    i.enternum();
    f.enternum();
    
    add(i, f);

    return 0;
}