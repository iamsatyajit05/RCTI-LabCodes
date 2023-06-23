#include <iostream>
using namespace std;

int main() {
    int celsius, fahrenheit;
    printf("Enter the Fahrenheit value: ");
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << " F = " << celsius << " C";

    return 0;
}