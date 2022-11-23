// Write a program to search an element within an array using linear search.

#include <stdio.h>

int main() {
    int size = 0, search = 0, isFound = 0, arr[100], index = 0;
    
    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements seprated by space: ");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the elemtns to be found: ");
    scanf("%d", &search);

    // Linear Search Algo

    for (int i = 0; i < size; i++) {
        if (arr[i] == search) {
            isFound = 1;
            index = i + 1;
            break;
        }
    }

    if (isFound) {
        printf("Element %d Found at %d", search, index);
    }
    else {
        printf("Element %d Not Found", search);
    }

    return 0;
}