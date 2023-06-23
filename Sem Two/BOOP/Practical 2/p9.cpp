#include <iostream>
using namespace std;

int main() {
    int arr[3][3], max = 0, mini = 0;

    cout<<"Enter the numbers: ";
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            cin>>arr[i][j];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < mini)
                mini = arr[i][j];
        }
    }

    cout<<"Max: "<<max<<endl<<"Mini: "<<mini<<endl;

    return 0;
}