// Write a program to implement stack with PUSH and POP operations

#include <stdio.h>

void push(int *arr, int element, int *top, int size) {
    if (top == size) {
        printf("Stack Overflow\n");
    }
    else {
        *top = *top + 1;
        arr[*top] = element;
    }
}

void pop(int arr[], int *top) {
        if (*top == -1) {
        printf("Stack Underflow\n");
    }
    else {
        *top = *top - 1;
    }
}

void show(int arr[], int top) {
    printf("\n");
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int stack[100] = {0};

    int top = -1;
    int size = 5;

    push(&stack[0], 10, &top, size);

    show(stack, top);

    push(&stack[0], 20, &top, size);

    push(&stack[0], 450, &top, size);

    show(stack, top);

    pop(&stack[0], &top);

    show(stack, top);

    pop(&stack[0], &top);
    
    show(stack, top);
}