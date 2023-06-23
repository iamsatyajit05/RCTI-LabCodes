// Write a program to convert string into lower case without using string function.

#include <stdio.h>

int main() {
    char str[100], lowerStr[100];

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            lowerStr[i] = (char)(str[i] + 32);
        }
        else {
            lowerStr[i] = str[i];
        }
    }

    printf("Original = %s\n", str);
    printf("Lowercase = %s", lowerStr);
}