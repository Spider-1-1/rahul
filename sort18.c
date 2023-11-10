#include <stdio.h>
#include <string.h>

#include <conio.h>
#define n 10
void merge_sort(char *[], int, int);
void merge(char *[], int, int, int);

void merge_sort(char *a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
  
    }
}
void merge(char *a[], int low, int mid, int high) {
    int h, i, j, k;
    char *temp[n];
    h = low;
    i = low;
    j = mid + 1;
    while ((h <= mid) && (j <= high)) {
        if (strcmp(a[h], a[j]) <= 0) {
            temp[i] = a[h];
            h = h + 1;
        } else {
            temp[i] = a[j];
            j = j + 1;
        }
        i = i + 1;
    }

    while (j <= high) {
        temp[i] = a[j];
        j = j + 1;
        i = i + 1;
    }
    while (h <= mid) {
        temp[i] = a[h];
        i = i + 1;
        h = h + 1;
    }
    for (k = low; k <= high; k++)
        a[k] = temp[k];
}
int main() {
    int i, size;
    char *a[n];
    printf("Enter the size:");
    scanf("%d", &size);
    printf("Enter the elements of the list:\n");
    for (i = 0; i < size; i++) {
        a[i] = malloc(100 * sizeof(char));
        scanf("%s", a[i]);
    }
    merge_sort(a, 0, size - 1);
    printf("Sorted array:\n");
    for (i = 0; i < size; i++) {
        printf("%s\n", a[i]);
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
