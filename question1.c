#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    int *arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory not allocated!\n");
        return 0;
    }

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    int largest = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }

        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Smallest element: %d\n", smallest);
    printf("Largest element: %d\n", largest);

    // Free allocated memory
    free(arr);

    return 0;
}