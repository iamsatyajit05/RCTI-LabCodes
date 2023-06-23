#include <iostream>

using namespace std;

class Student {
    float spi;
    int currentNum;
    static int objCount;

    public:
        void enterspi() {
            objCount++;
            currentNum = objCount;
            cout<<"Student "<<currentNum<<": ";
            cin>>spi;
        }
        
        // void display() {
        //     cout<<"Student "<<currentNum<<": "<<spi;
        // }
        
        int maxSPI(Student s[]) {
            int who = 0;
            int max = 0;
            for (int i = 0; i < objCount; i++) {
                if(s[i].spi > max) {
                    max = s[i].spi;
                    who = s[i].currentNum;
                }
            }

            return who;
        }
};

int Student::objCount;

int main() {
    Student s[10];
    
    cout<<"Enter the students SPI "<<endl<<endl;

    for (int i = 0; i < 10; i++) 
        s[i].enterspi();

    // cout<<endl<<"SPI of students "<<endl<<endl;

    // for (int i = 0; i < 10; i++) {
    //     s[i].display();
    //     cout<<endl;
    // }

    cout<<endl<<"Student "<<s[0].maxSPI(s)<<" has highest SPI";

    return 0;
}