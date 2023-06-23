#include <iostream>
#include <math.h>
using namespace std;

class Cube {
    int length, volume;
    public:
        void getLength() {
            cout<<"Enter the length of cube: ";
            cin>>length;
        }
        
        // void showLength() {
        //     cout<<"Length of cube is "<<length;
        // }

        void getVolume() {
            volume = pow(length, 3);
            cout<<"Volume of cube is "<<volume<<" unit cube"<<endl;
        }
};

class Sphere {
    int radius;
    float volume;
    public:
        void getRadius() {
            cout<<"Enter the radius of sphere: ";
            cin>>radius;
        }

        // void showRadius() {
        //     cout<<"Radius of sphere is "<<radius;
        // }

        void getVolume() {
            volume = (4/3) * (3.14) * pow(radius, 3);
            cout<<"Volume of sphere is "<<volume<<" unit cube"<<endl;
        }
};

int main() {
    Cube c;
    Sphere s;
    c.getLength();
    c.getVolume();
    s.getRadius();
    s.getVolume();
    return 0;
}