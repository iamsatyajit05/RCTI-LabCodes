// Write a program to sort an unsorted array of five elements using merge sort

#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int leftarr[n1], rightarr[n2];

	for (i = 0; i < n1; i++) {
        leftarr[i] = arr[l + i];
    }
	for (j = 0; j < n2; j++) {
        rightarr[j] = arr[m + 1 + j];
    }

	i = j = 0, k = l;

	while (i < n1 && j < n2) {
		if (leftarr[i] <= rightarr[j]) {
			arr[k] = leftarr[i];
			i++;
		}
		else {
			arr[k] = rightarr[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = leftarr[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = rightarr[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int left, int right, int size) {
	if (left < right) {
		int mid = (left+right) / 2;

		mergeSort(arr, left, mid, size);
		mergeSort(arr, mid + 1, right, size);
        
		merge(arr, left, mid, right);
	}
}

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

	mergeSort(arr, 0, size - 1, size);

	printf("\nSorted array is \n");
	show(arr, size);
	return 0;
}
