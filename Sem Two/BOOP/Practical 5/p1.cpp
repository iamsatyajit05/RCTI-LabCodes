#include <iostream>
#include <string.h>
using namespace std;

struct student {
    int id;
    string name;
    float percentage;
}s1;

int main() {
    cout<<"Enter the information of student"<<endl;
    
    cout<<"Id: ";
    cin>>s1.id;
    cout<<"Name: ";
    cin>>s1.name;
    cout<<"Percentage: ";
    cin>>s1.percentage;
    
    cout<<"\n\nStudent 1"<<"\nId: "<<s1.id<<"\nName: "<<s1.name<<"\nPercentage: "<<s1.percentage<<" %";

    return 0;
}