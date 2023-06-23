#include <iostream>

using namespace std;

class Employee {
    int empcode;
    char empname[10];

public:
    void getdata() {
        cout<<"Enter the employee code: ";
        cin>>empcode;
        cout<<"Enter the employee name: ";
        cin>>empname;
    }
    
    void display() {
        cout<<"Employee's name: "<<empname<<endl;
        cout<<"Employee's code: "<<empcode<<endl<<endl;
    }
};

int main() {
    Employee emp[6];
    
    cout<<"Enter the details of employees "<<endl<<endl;

    for (int i = 0; i < 6; i++) {
        cout<<"Employee number "<<i + 1<<endl;
        emp[i].getdata();
        cout<<endl;
    }

    cout<<endl<<"Details of employees "<<endl<<endl;

    for (int j = 0; j < 6; j++) {
        cout<<"Employee number "<<j + 1<<endl;
        emp[j].display();
    }

    return 0;
}