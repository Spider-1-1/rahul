#include <stdio.h>
#include <string.h>
int selectionSortRecursive(char ar[][100], int size, int index) {
    if (index == size - 1) {
        return 0;
    }
    int j;
    for (j = index + 1; j < size; j++) {
        if (strcmp(ar[index], ar[j]) > 0) {
            char temp[100];
            strcpy(temp, ar[index]);
            strcpy(ar[index], ar[j]);
            strcpy(ar[j], temp);
        }
    }
    return  selectionSortRecursive(ar, size, index + 1);
}
int main() {
    char ar[10][100];
    int i, step = 0;
    printf("Enter the strings\n");
    for (i = 0; i < 10; i++) {
        scanf("%s", ar[i]);
    }
   
    step = selectionSortRecursive(ar, 10, 0);
  printf("Sorted Strings are\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", ar[i]);
    }

 
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
