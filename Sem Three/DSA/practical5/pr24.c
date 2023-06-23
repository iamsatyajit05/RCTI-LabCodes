// Write a program to sort an unsorted array of five elements using insertion sort.

#include <stdio.h>

void show(int arr[], int size){
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
    }
	printf("\n");
}

int main() {
    int size = 5, arr[5];

    for (int i = 0; i < size; i++) {
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }

	printf("\nGiven array is \n");
	show(arr, size);

    printf("\nProcess on array,\n");
	int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        show(arr, size);
    }

	printf("\nSorted array is \n");
	show(arr, size);

    return 0;
}