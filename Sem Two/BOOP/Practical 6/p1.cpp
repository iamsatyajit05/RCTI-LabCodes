#include <iostream>
using namespace std;

class Item {
    int num, cost;
    public:
        void putdata() {
            cout<<"Enter the item number: ";
            cin>>num;
            cout<<"Enter the item cost: ";
            cin>>cost;
        }

        friend void getdata(Item);
};

void getdata(Item x) {
    cout<<"Item number: "<<x.num<<endl;
    cout<<"Item cost: "<<x.cost<<endl;
}

int main() {
    Item i;
    i.putdata();
    getdata(i);
    return 0;
}