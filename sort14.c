#include <stdio.h>
#include <string.h>

int bubbleSort(char ar[][100], int size, int index) {
    if (index == size - 1) {
        return 0;
    }

    int j;

    for (j = 0; j < size - index - 1; j++) {
        if (strcmp(ar[j], ar[j + 1]) > 0) {
            char temp[100];
            strcpy(temp, ar[j]);
            strcpy(ar[j], ar[j + 1]);
            strcpy(ar[j + 1], temp);
        }
    }

    return bubbleSort(ar, size, index + 1);
}

int main() {
    char ar[10][100];
    int i, step = 0;
    printf("Enter the strings\n");

    for (i = 0; i < 10; i++) {
        scanf("%s", ar[i]);
    }

    step = bubbleSort(ar, 10, 0);

    printf("Sorted Strings are\n");

    for (i = 0; i < 10; i++) {
        printf("%s\n", ar[i]);
    }

    return 0;  // Add a return statement for the main function
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
