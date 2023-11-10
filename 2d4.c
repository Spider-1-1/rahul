#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;

    // Get the dimensions for the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &cols1);

    // Get the dimensions for the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &cols2);

    // Check if multiplication is possible
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible due to incompatible dimensions.\n");
        return 1; // Exit with an error code
    }

    int matrix1[rows1][cols1], matrix2[rows2][cols2], result[rows1][cols2];

    // Input for the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Multiply the matrices
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display the result matrix
    printf("Result of the multiplication:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Output:

Enter the number of rows for the first matrix: 2
Enter the number of columns for the first matrix: 3
Enter the number of rows for the second matrix: 3
Enter the number of columns for the second matrix: 2
Enter elements of the first matrix:
1 2 3
4 5 6
Enter elements of the second matrix:
7 8
9 10
11 12
Result of the multiplication:
58      64
139     154
