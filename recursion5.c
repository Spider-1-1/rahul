#include <stdio.h>
int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        int subMax = findMax(arr, size - 1);
        
        return (subMax > arr[size - 1]) ? subMax : arr[size - 1];
    }
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    int i;
    printf("Enter the elements of the array:\n");
     for ( i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }
    int maxElement = findMax(arr, size);
    printf("The largest element in the array is: %d\n", maxElement);

}

Output:

Enter the size of the array: 5
Enter the elements of the array:
3 7 2 9 5
The largest element in the array is: 9
