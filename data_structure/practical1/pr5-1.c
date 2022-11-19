// Write a program to find length of a string without using string function.

#include <stdio.h>

int main() {
    char str[100];
    int count;

    printf("Enter a string: ");
    gets(str);

    for (count = 0; str[count] != '\0'; ++count);

    printf("%s is %d charcter long", str, count);

    return 0;
}