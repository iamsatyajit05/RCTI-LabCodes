#include <iostream>
using namespace std;

int main() {
    int score, avg;
    cout<<"Enter total marks of 5 subjects(Out of 100): ";
    cin>>score;
    avg = score/50;

    cout<<"Grade: ";
    switch(avg) {
        case 10:
        case 9:
            cout<<"A+";
            break;
        case 8:
            cout<<"A";
            break;
        case 7:
            cout<<"B+";
            break;
        case 6:
            cout<<"B";
            break;
        case 5:
            cout<<"C";
            break;
        case 4:
            cout<<"D";
            break;
        case 3:
        case 2:
        case 1:
        case 0:
            cout<<"FAIL";
            break;
        default:
            cout<<"Enter Valid Marks";
    }

    return 0;
}