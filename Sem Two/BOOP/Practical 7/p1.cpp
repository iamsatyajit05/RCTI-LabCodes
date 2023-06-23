#include <iostream>
#include <string.h>

using namespace std;

class Employee {
    string emp_name;
    int emp_age, emp_salary;

    public:
        void enterdata() {
            cout<<"Enter the employee name: ";
            cin>>emp_name;
            cout<<"Enter the employee age: ";
            cin>>emp_age;
            cout<<"Enter the employee salary (in rupee): ";
            cin>>emp_salary;
        }
        
        void display() {
            cout<<"Name: "<<emp_name<<endl;
            cout<<"Age: "<<emp_age<<" Year"<<endl;
            cout<<"Salary: "<<emp_salary<<" Rupees"<<endl;
        }
};

int main() {
    Employee emp[5];
    
    cout<<"Enter the details of employees "<<endl<<endl;

    for (int i = 0; i < 5; i++) {
        cout<<i + 1<<")"<<endl;
        emp[i].enterdata();
        cout<<endl;
    }

    cout<<endl<<"Details of employees "<<endl<<endl;

    for (int i = 0; i < 5; i++) {
        cout<<i + 1<<")"<<endl;
        emp[i].display();
        cout<<endl;
    }

    return 0;
}