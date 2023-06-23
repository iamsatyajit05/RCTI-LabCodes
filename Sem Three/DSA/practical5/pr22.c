// Write a program to sort an unsorted array of 5 elements using selection sort.

#include <stdio.h>

int main() {
    int size = 5, array[5];

    for (int i = 0; i < size; i++) {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i< size; i++) {
        for(int j = i; j< size; j++) {
            if(array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
            // for (int k = 0; k < size; k++) {
            //     printf("%d ", array[k]);
            // }
            // printf("\t");  
        }
        // printf("\n");   
    }

    printf("\nSorted Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
