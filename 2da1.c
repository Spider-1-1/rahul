
#include <stdio.h>

int main() {
    int matrix[4][2]; // Declare a 4x2 matrix
    int i, j;

    // Prompt the user to enter the matrix elements
    printf("Enter the elements of the matrix (4x2):\n");

    // Use nested loops to read the elements
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix in matrix format
    printf("\nMatrix Format:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Output:

Enter the elements of the matrix (4x2):
Enter element at row 1, column 1: 1
Enter element at row 1, column 2: 2
Enter element at row 2, column 1: 3
Enter element at row 2, column 2: 4
Enter element at row 3, column 1: 5
Enter element at row 3, column 2: 6
Enter element at row 4, column 1: 7
Enter element at row 4, column 2: 8

Matrix Format:
1       2
3       4
5       6
7       8
