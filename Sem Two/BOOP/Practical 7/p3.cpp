#include <iostream>

using namespace std;

class Variable {
    int x;
    static int increment;

    public:
        void getdata() {
            cout<<"Enter the value: ";
            cin>>x;
        }
        
        void display() {
            cout<<"x = "<<x*increment<<endl;
        }
};

int Variable::increment = 3;

int main() {
    Variable v1, v2, v3;
    v1.getdata();
    v1.display();
    cout<<endl;

    v2.getdata();
    v2.display();
    cout<<endl;

    v3.getdata();
    v3.display();

    return 0;
}