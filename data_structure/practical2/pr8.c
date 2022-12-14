// Write a program to implement queue with insert and delete operation

#include <stdio.h>

void insert(int *arr, int *front, int *rear, int size) {
    if (*rear >= size) {
        printf("\nQueue Overflow\n");
    }
    else {
        int element = 0;
        printf("\nEnter the value of element: ");
        scanf("%d", &element);
        
        if (*front == -1) {
            *front = 0;
        }
        
        *rear = *rear + 1;
        arr[*rear] = element;

        printf("\nInsertion Succesful\n");
    }
}

void delete(int *arr, int *front, int *rear) {
    if (*front == -1 || *front > *rear) {
        printf("\nQueue Underflow\n");
    }
    else {
        *front = *front + 1;
        
        printf("\nDeletion Succesful\n");
    }
}

void show(int *arr, int front, int rear) {
    if(front == -1 || front > rear) {
        printf("\nQueue is Empty\n");
    }

    else{
        printf("\n");
        for (int i = front; i <= rear; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}

int main() {
    int queue[100] = {0};

    int front = -1, rear = -1, size = 0;

    printf("Enter the size of queue: ");
    scanf("%d", &size);

    while (1) {
        int choice = 0;
        printf("\n1. Insert Element\n");
        printf("2. Delete Element\n");
        printf("3. Show Elements\n");

        printf("Choose your process: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                insert(&queue[0], &front, &rear, size);
                break;

            case 2:
                delete(&queue[0], &front, &rear);
                break;

            case 3:
                show(&queue[0], front, rear);
                break;

            default:
                printf("\nWrong choice :(\n");
                break;
        }
    }
}