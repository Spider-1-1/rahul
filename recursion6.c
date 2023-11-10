#include <stdio.h>
int findMin(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int subMin = findMin(arr, size - 1);    
        return (subMin < arr[size - 1]) ? subMin : arr[size - 1];
    }
}

int main() {
    int size,i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int minElement = findMin(arr, size);
    printf("The smallest element in the array is: %d\n", minElement);
    return 0;
}

Output:

Enter the size of the array: 5
Enter the elements of the array:
Element 1: 8
Element 2: 3
Element 3: 6
Element 4: 1
Element 5: 9
The smallest element in the array is: 1
