#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char text1[200], text2[200];

    fstream college, school;
    college.open("college.txt", ios::out | ios::in);
    school.open("school.txt", ios::out | ios::in);

    cout << "Write text to be written on college file:" << endl;
    cin.getline(text1, sizeof(text1));
    cout << "Write text to be written on school file:" << endl;
    cin.getline(text2, sizeof(text2));

    // Writing on file
    college << text1 << endl;
    school << text2 << endl;

    // Reding from file
    college >> text1;
    cout << text1 << endl;
    school >> text2;
    cout << text2 << endl;

    // closing the file
    college.close();
    school.close();
    return 0;
}