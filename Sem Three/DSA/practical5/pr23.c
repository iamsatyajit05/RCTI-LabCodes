// Write a program to sort an unsorted array of 5 elements using quick sort.

#include <stdio.h>

void quicksort(int arr[],int left,int right, int size){
    int i, j, pivot, temp;

    if(left<right) {
        pivot=left;
        i=left;
        j=right;

        while(i<j) {
            while(arr[i]<=arr[pivot]&&i<right) {i++;}

            while(arr[j]>arr[pivot]){j--;}

            if(i<j) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;

        // show(arr, size);
        quicksort(arr,left,j-1, size);
        // show(arr, size);
        quicksort(arr,j+1,right, size);

    }
}

void show(int arr[], int size) {
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
    quicksort(arr, 0, size-1, size);

    printf("\nSorted array is \n");
	show(arr, size);
    
    return 0;
}