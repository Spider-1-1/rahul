#include <stdio.h>
int insertionSortRecursive(int ar[], int size, int index) {
    if (index >= size) {
        return 0;
    }
    int step = 0;
    int key = ar[index];
    int j = index - 1;

    while (j >= 0 && ar[j] > key) {
        ar[j + 1] = ar[j];
        j--;
        step++;
    }
    ar[j + 1] = key;
    return step + insertionSortRecursive(ar, size, index + 1);
}
int main() {
    int ar[10], i, step = 0;
   
    printf("Enter the arrays\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &ar[i]);
    }
   
    step = insertionSortRecursive(ar, 10, 1);
    
    printf("Sorted Arrays are\n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", ar[i]);
    }

}

Output:

Enter the arrays
5
2
9
1
8
3
7
6
10
4

Sorted Arrays are
1
2
3
4
5
6
7
8
9
10
