#include <stdio.h>
#include <conio.h>
#define n 10
void merge_sort(int *, int, int);
void merge(int *, int, int, int);

void merge_sort(int a[], int low, int high) {
    int mid;
    if (low < high) {
        mid = (low + high) / 2;
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}
void merge(int a[], int low, int mid, int high) {
    int h, i, j, k, temp[n];
    h = low;
    i = low;
    j = mid + 1;
    while ((h <= mid) && (j <= high)) {
        if (a[h] <= a[j]) {
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
    int i, a[n], size;
    ;
    
    printf("Enter the size:");
    scanf("%d", &size);
    printf("Enter the element of the list");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    
   
    merge_sort(a, 0, size - 1);
    printf("Sorted array");
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
