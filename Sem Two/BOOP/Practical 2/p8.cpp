#include <iostream>
using namespace std;

int main() {
    int arr[10], sum = 0, avg = 0;
    cout<<"Enter the numbers: ";
    for(int i = 0; i < 10; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }

    avg = sum/10;

    for(int i = 0; i < 10; i++) {
        for (int j = 0; j < 9; j++) {
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

    cout<<"Sum: "<<sum<<endl<<"Average: "<<avg<<endl;

    cout<<"Sorted Array: ";
    for(int i = 0; i < 10; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}