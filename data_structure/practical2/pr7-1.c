// Write a program to find factorial of a number using recursion.

#include <stdio.h>

long int factorial(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    
    return n * factorial(n-1);
}

int main() {
    int num;

    printf("Enter the number to find factorial: ");
    scanf("%d", &num);

    printf("\nFactorial of %d is %d", num, factorial(num));
}