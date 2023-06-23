#include <iostream>
using namespace std;

int main() {
    int day, month, year;
    cout<<"Enter the days: ";
    cin>>day;
    year = day/365;
    day %= 365;
    month = day/30;
    day %= 30;

    cout<<year<<" Year "<<month<<" Month "<<day<<" Day";
    return 0;
}