// Write a program to copy string without using string function.

#include <stdio.h>

int main() {
    char str[100], copyStr[100];

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        copyStr[i] = str[i];
    }

    printf("Original = %s\n", str);
    printf("Copy String = %s", copyStr);
}