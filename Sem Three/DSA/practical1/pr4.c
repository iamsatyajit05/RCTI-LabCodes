// Write a program to search an element within an array using binary search.

#include <stdio.h>

int main() {
    int size = 0, search = 0, isFound = 0, arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elemtns seprated by space: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the elemtns to be found: ");
    scanf("%d", &search);

    // Sort Algo

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Binary Search Algo

    int start, end, mid;

    start = 0;
    end = size - 1;
    mid = (start + end) / 2;

    while (start <= end) {
        if (arr[mid] < search) {
            start = mid + 1;
        }

        else if (arr[mid] > search) {
            end = mid - 1;
        }

        else if (arr[mid] == search) {
            isFound = 1;
            break;
        }

        mid = (start + end) / 2;
    }

    if (isFound) {
        printf("Element %d Found", search);
    }
    else {
        printf("Element %d Not Found", search);
    }

    return 0;
}