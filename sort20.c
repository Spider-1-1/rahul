#include <stdio.h>
#include <string.h>
#include <conio.h>
#define n 10


void quick_sort(char *[], int, int);
int partition(char *[], int, int);

void quick_sort(char *a[], int low, int high) {
    int pivot;
    if (low < high) {
        pivot = partition(a, low, high);
        quick_sort(a, low, pivot - 1);
        quick_sort(a, pivot + 1, high);
    }
}

int partition(char *a[], int low, int high) {
    char *pivot;
    int i, j;
    char *temp;
    pivot = a[high];
    i = low - 1;
    for (j = low; j < high; j++) {
        if (strcmp(a[j], pivot) <= 0) {
            i++;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        
        }
    }
    temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;

    return (i + 1);
}

int main() {
    int i, size;
    char *a[n]; printf("Enter the size:");
    scanf("%d", &size);
    printf("Enter the elements of the list:\n");
    for (i = 0; i < size; i++) {
        a[i] = malloc(100 * sizeof(char));
        scanf("%s", a[i]);
    }
    quick_sort(a, 0, size - 1);

    printf("Sorted array:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", a[i]);
    }
    for (i = 0; i < size; i++) {
        free(a[i]);
    }

    return 0;
}

Output:

Enter the size: 8
Enter the elements of the list:
apple
banana
grape
orange
kiwi
pear
cherry
mango

Sorted array:
apple
banana
cherry
grape
kiwi
mango
orange
pear
