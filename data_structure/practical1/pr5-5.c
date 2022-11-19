// Write a program to concat two strings without using string function.

#include <stdio.h>

int main() {
    char str1[100], str2[100], concatStr[100];
    int len = 0;

    printf("Enter a 1st string: ");
    gets(str1);

    printf("Enter a 2nd string: ");
    gets(str2);

    for (int i = 0; str1[i] != '\0'; i++, len++) {
        concatStr[len] = str1[i];
    }

    for (int i = 0; str2[i] != '\0'; i++, len++) {
        concatStr[len] = str2[i];
    }

    printf("First Str = %s\n", str1);
    printf("Second Str = %s\n", str2);
    printf("Copy String = %s", concatStr);
}