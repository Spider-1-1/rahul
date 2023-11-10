#include <stdio.h>
#include <string.h>

int insertionSortRecursive(char ar[][100], int size, int index) {
    if (index >= size) {
        return 0;
    }
    char key[100];
    strcpy(key, ar[index]);
    int j = index - 1;

    while (j >= 0 && strcmp(ar[j], key) > 0) {
        strcpy(ar[j + 1], ar[j]);
        j--;
    }
    strcpy(ar[j + 1], key);
    return insertionSortRecursive(ar, size, index + 1);
}

int main() {
    char ar[10][100];
    int i;

    printf("Enter the strings\n");
    for (i = 0; i < 10; i++) {
        scanf("%s", ar[i]);
    }
    insertionSortRecursive(ar, 10, 1);
    printf("Sorted Strings are\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", ar[i]);
    }

    return 0;
}

Output:

Enter the strings:
apple
banana
grape
orange
kiwi
pear
cherry
mango
strawberry
blueberry

Sorted Strings are:
apple
banana
blueberry
cherry
grape
kiwi
mango
orange
pear
strawberry
