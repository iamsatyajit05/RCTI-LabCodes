#include <iostream>
using namespace std;

class Distance {
    int feet, inch;
    public:
        void getdata() {
            cout<<"Enter the distance in feet-inch formet: ";
            cin>>feet>>inch;
        }

        void showdata() {
            cout<<"Distance: "<<feet<<" feet "<<inch<<" inch"<<endl;
        }
        void add(Distance a, Distance b) {
            feet = a.feet + b.feet;
            inch = a.inch + b.inch;
            if (inch >= 12) {
                feet++;
                inch -= 12;
            }
        }
};

int main() {
    Distance x, y, z;
    x.getdata();
    y.getdata();
    z.add(x, y);
    z.showdata();
    return 0;
}