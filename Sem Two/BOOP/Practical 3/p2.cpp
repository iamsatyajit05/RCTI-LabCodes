#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float km, meter, cm, inch, feet;
    cout<<"Enter distance in Kilometer: ";
    cin>>km;

    meter = km*1000;
    cm = meter*100;
    inch = cm/2.54;
    feet = inch/12;

    cout<<km<<" km = "<<setw(20)<<setfill('_')<<meter<<" meter"<<endl;
    cout<<km<<" km = "<<setw(20)<<cm<<" centimeter"<<endl;
    cout<<km<<" km = "<<setw(20)<<inch<<" inch"<<endl;
    cout<<km<<" km = "<<setw(20)<<setprecision(3)<<feet<<" feet"<<endl;

    return 0;
}