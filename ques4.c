#include <stdio.h>

void swap(int *a, int *b) {
    int t = *a; *a = *b; *b = t;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // last element as pivot
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);   // left of pivot
        quickSort(arr, pi + 1, high);  // right of pivot
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    printf("Quick Sort:\nBefore: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    quickSort(arr, 0, n - 1);
    printf("\nAfter : ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}