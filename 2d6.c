#include <stdio.h>

int main() {
    int rows, cols;
    double scalar;

    // Get the dimensions for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Get the scalar value
    printf("Enter the scalar value: ");
    scanf("%lf", &scalar);

    double matrix[rows][cols];

    // Input for the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Multiply the matrix by the scalar
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }

    // Display the result matrix
    printf("Result of the multiplication by %lf:\n", scalar);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

Output:

Enter the number of rows: 2
Enter the number of columns: 3
Enter the scalar value: 2.5
Enter elements of the matrix:
1.0 2.0 3.0
4.0 5.0 6.0
Result of the multiplication by 2.500000:
2.500000        5.000000        7.500000
10.000000       12.500000       15.000000
