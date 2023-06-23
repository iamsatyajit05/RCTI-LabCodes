// Write a program to convert string into upper case without using string function.

#include <stdio.h>

int main() {
    char str[100], upperStr[100];

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            upperStr[i] = (char)(str[i] - 32);
        }
        else {
            upperStr[i] = str[i];
        }
    }

    printf("Original = %s\n", str);
    printf("Uppercase = %s", upperStr);
}