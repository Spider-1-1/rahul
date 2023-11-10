#include <stdio.h>
#include <time.h>
#include <conio.h>
#define n 10
int counter = 0;
void quick_sort(int *, int, int);
int partition(int *, int, int);

void quick_sort(int a[], int low, int high) {
    int pivot;
    if (low < high) {
        pivot = partition(a, low, high);
        quick_sort(a, low, pivot - 1);
        quick_sort(a, pivot + 1, high);
    }
}

int partition(int a[], int low, int high) {
    int pivot, i, j, temp;
    pivot = a[high];
    i = low - 1;
    for (j = low; j < high; j++) {
        if (a[j] <= pivot) {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            counter++;
        }
    }
    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
   
    return (i + 1);
}

int main() {
    int i, a[n], size;
    printf("Enter the size:");
    scanf("%d", &size);
    printf("Enter the elements of the list:");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, size - 1);
    

    printf("Sorted array:");
    for (i = 0; i < size; i++) {
        printf("\n%d", a[i]);
    }

}

Output:

Enter the size: 8
Enter the elements of the list:
45
12
78
23
56
89
34
67

Sorted array:
12
23
34
45
56
67
78
89
