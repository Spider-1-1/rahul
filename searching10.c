#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}
int main() {
    srand(time(NULL));
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int i;
    printf("Enter the sorted elements of the array:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int searchItem;
    printf("Enter the item to search in the array: ");
    scanf("%d", &searchItem);
    clock_t start_time = clock();
    int result = binarySearch(arr, 0, size - 1, searchItem);
    clock_t end_time = clock();

    double cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    if (result != -1) {
        printf("Element found at index: %d\n", result);
        if (arr[result] == searchItem) {
            printf("The search is in the best case.\n");
        } else {
            printf("The search is not in the best case.\n");
        }
    } else {
        printf("Element not found in the array.\n");
        if (searchItem > arr[size - 1] || searchItem < arr[0]) {
            printf("The search is in the worst case.\n");
        } else {
            printf("The search is not in the worst case.\n");
        }
    }
    printf("Time taken for searching: %f seconds\n", cpu_time_used);
    return 0;
}

Output:

Enter the size of the array: 10
Enter the sorted elements of the array:
1 2 3 4 5 6 7 8 9 10
Enter the item to search in the array: 7
Element found at index: 6
The search is not in the best case.
The search is not in the worst case.
Time taken for searching: 0.000001 seconds
