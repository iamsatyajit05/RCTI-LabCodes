// Write a program to implement stack with PUSH and POP operations

#include <stdio.h>

void push(int *arr, int *top, int size) {
    if (*top >= size-1) {
        printf("\nStack Overflow\n");
    }
    else {
        int element = 0;
        printf("\nEnter the value of element: ");
        scanf("%d", &element);

        *top = *top + 1;
        arr[*top] = element;

        printf("\nPush Succesful\n");
    }
}

void pop(int *arr, int *top) {
        if (*top == -1) {
        printf("\nStack Underflow\n");
    }
    else {
        *top = *top - 1;
        
        printf("\nPop Succesful\n");
    }
}

void show(int *arr, int top) {
    if(top == -1) {
        printf("\nStack is Empty\n");
    }
    else {
        printf("\n");
        for (int i = 0; i <= top; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int stack[100] = {0};

    int top = -1, size = 0;

    printf("Enter the size of stack: ");
    scanf("%d", &size);

    while (1) {
        int choice = 0;
        printf("\n1. Push Element\n");
        printf("2. Pop Element\n");
        printf("3. Show Elements\n");

        printf("Choose your process: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                push(&stack[0], &top, size);
                break;

            case 2:
                pop(&stack[0], &top);
                break;

            case 3:
                show(&stack[0], top);
                break;

            default:
                printf("\nWrong choice :(\n");
                break;
        }
    }
}