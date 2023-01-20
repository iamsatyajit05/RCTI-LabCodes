// Write a program to sort an unsorted array of five elements using shell sort.

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
	for (int interval = size / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < size; i += 1) {
            int temp = arr[i];
            int j;
            for (j = i; j >= interval && arr[j - interval] > temp; j -= interval) {
                arr[j] = arr[j - interval];
            }
            arr[j] = temp;
            show(arr, size);
        }

    }

	printf("\nSorted array is \n");
	show(arr, size);

    return 0;
}