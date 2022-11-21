// Write a program to calculate Fibonacci series of a number using recursion.

#include <stdio.h>

int fibonacci(int x){
    if (x == 0){
        return 0;
    }
    else if (x == 1) {
        return 1;
    }
   
    return fibonacci(x-1)+fibonacci(x-2);
}

int main() {
    int num;

    printf("Enter the number to print fibonacci series: ");
    scanf("%d", &num);

    printf("\nFibonacci series till %d terms,\n", num);
    
    for (int i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
}