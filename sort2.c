#include <stdio.h>
#include <time.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {
    int arr[50]; // Assuming a maximum size of the array is 50
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Record the start time
    clock_t start_time = clock();

    // Perform selection sort
    selectionSort(arr, n);

    // Record the end time
    clock_t end_time = clock();

    // Calculate the time taken in seconds
    double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the sorted array
    printf("Sorted array using Selection Sort: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTime taken: %f seconds\n", time_taken);

    return 0;
}

Output:

Enter the size of the array: 10
Enter 10 elements for the array:
1
2
3
4
5
9
3
0
10
15
13
Sorted array using Selection Sort: 0 1 3 3 4 5 9 10 13 15 
Time taken: 0.000002 seconds