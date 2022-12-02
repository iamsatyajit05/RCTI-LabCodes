// Write a program to find Greatest Common Divisor using recursion.

#include <stdio.h>

// int gcd(int a, int b){
//     if(a > b) {
//         return gcd(a-b, b);
//     }

//     else if(a < b)  {
//         return gcd(a, b-a);
//     }
    
//     else {
//         return a;
//     }
// }

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = gcd(num1, num2);

    printf("\nGreatest Common Divisor of %d and %d is %d", num1, num2, result);
}