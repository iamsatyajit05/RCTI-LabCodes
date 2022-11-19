// Write a program to compare two string without using string function.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int str1len, str2len, isDifferent = 0;
    
    printf("Enter 1st string: ");
    gets(str1);

    printf("Enter 2nd string: ");
    gets(str2);

    for (str1len = 0; str1[str1len] != '\0'; ++str1len);

    for (str2len = 0; str2[str2len] != '\0'; ++str2len);

    for (int i = 0; str1[i] != '\0'; i++) {
        if(str1len != str2len || str1[i] != str2[i]) {
            isDifferent = 1;
            break;
        }
    }

    if(isDifferent) {
        printf("Both strings are different");
    }
    else {
        printf("Both strings are same");
    }
    
    return 0;
}