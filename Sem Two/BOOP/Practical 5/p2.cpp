#include <iostream>
#include <string.h>
using namespace std;

struct railTicket {
    string trainName;
    int depHour;
    int depMinute;
    int plateformNo;
}d1[10];

int main() {
    cout<<"Enter ticket information"<<endl<<endl;
    for (int i = 0; i < 10; i++) {
        cout<<"Ticket "<<i+1<<endl;
        cout<<"Train Name: ";
        cin>>d1[i].trainName;
        cout<<"Departue Time: ";
        cin>>d1[i].depHour>>d1[i].depMinute;
        cout<<"Plateofrm Number: ";
        cin>>d1[i].plateformNo;
        cout<<endl;
    }

    cout<<endl<<"Ticket Database";
    for (int i = 0; i < 10; i++) {
        cout<<endl<<endl<<"Ticket "<<i+1<<endl;
        cout<<"Train Name: "<<d1[i].trainName<<endl;
        cout<<"Departue Time: "<<d1[i].depHour<<":"<<d1[i].depMinute<<endl;
        cout<<"Plateform Number: "<<d1[i].plateformNo;
    }
    
    return 0;
}