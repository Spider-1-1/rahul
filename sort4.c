#include <stdio.h>

int bubbleSort(int ar[], int size, int index) {
    if (index == size - 1) {
        return 0;
    }
    int j;
    for (j = 0; j < size - index - 1; j++) {
        if (ar[j] > ar[j + 1]) {
            int temp = ar[j];
            ar[j] = ar[j + 1];
            ar[j + 1] = temp;
         
        }
    }

    return bubbleSort(ar, size, index + 1);
}
int main() {
    int ar[10], i, step = 0;
    printf("Enter the arrays\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &ar[i]);
    }
    step = bubbleSort(ar, 10, 0);
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
