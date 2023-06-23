#include <iostream>
#include <string.h>
using namespace std;

int max(int a, int b, int c){
    if(a>b && a>c)
        return a;

    else if(b>c)
        return b;

    else
        return c;
}

string max(string a, string b, string c){
    if(a.length() > b.length() && a.length() > c.length())
        return a;

    else if(b.length() > c.length())
        return b;

    else
        return c;
}

int main() {
    int a, b, c;
    string s1, s2, s3;
    
    cout<<"Enter the 3 numbers: ";
    cin>>a>>b>>c;

    cout<<"Enter the 1st string: ";
    cin>>s1;

    cout<<"Enter the 2nd string: ";
    cin>>s2;

    cout<<"Enter the 3rd string: ";
    cin>>s3;
    
    cout<<"Max number is "<<max(a, b, c)<<endl;
    cout<<"Max string is "<<max(s1, s2, s3)<<endl;

    return 0;
}