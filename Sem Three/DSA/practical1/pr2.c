// Write a program to implement array using row and column major order

#include <stdio.h>

int main() {
    int arr[3][3];

    printf("Enter the elements of arr seprated with space for 3x3 matrix: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\nROW MAJOR\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
    }

    
    printf("\n\nCOULMN MAJOR\n\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[j][i]);
        }
    }

    return 0;
}