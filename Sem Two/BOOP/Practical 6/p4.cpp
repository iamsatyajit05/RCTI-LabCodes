#include <iostream>
using namespace std;

class Student {
    int math, science;
    public: 
        void entermark() {
            cout<<"Enter the mark of math and science (out of 100): ";
            cin>>math>>science;
        }

        // void showmark() {
        //     cout<<"Total mark of student is "<<math + science;
        // }

        void max(Student s1, Student s2) {
            int maxs1, maxs2;
            maxs1 = s1.math + s1.science;
            maxs2 = s2.math + s2.science;

            if(maxs1 == maxs2)
                cout<<"Both have same marks";

            else if(maxs1 > maxs2)
                cout<<"Student 1 have highest marks";

            else
                cout<<"Student 2 have highest marks";
        }
};

int main() {
    Student s1, s2;
    s1.entermark();
    s2.entermark();
    s1.max(s1, s2);
    return 0;
}