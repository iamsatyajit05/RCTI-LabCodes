// Write a program to reverse string without using string function.

#include <stdio.h>

int main() {
    char str[100], revstr[100];
    int strlen = 0, isDifferent = 0;
    
    printf("Enter a string: ");
    gets(str);

    for (strlen = 0; str[strlen] != '\0'; ++strlen);

    for (int i = strlen - 1, j = 0; i >= 0; i--, j++) {
        revstr[j] = str[i];
    }
    
    printf("Original = %s\n", str);
    printf("Reverse = %s", revstr);
    
    return 0;
}