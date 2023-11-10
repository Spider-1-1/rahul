#include <stdio.h>

int main() {
    int rows, columns;
    
    // Prompt the user to enter the number of rows and columns for the matrices
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &columns);
    
    // Declare the matrices and the result matrix
    int matrix1[rows][columns];
    int matrix2[rows][columns];
    int result[rows][columns];
    
    // Prompt the user to enter the elements of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    // Prompt the user to enter the elements of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Add the matrices and store the result in the "result" matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    // Display the result matrix
    printf("Result Matrix (Sum of the two matrices):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

output:

Enter the number of rows and columns for the matrices: 2 3
Enter the elements of the first matrix:
Enter element at row 1, column 1: 1
Enter element at row 1, column 2: 2
Enter element at row 1, column 3: 3
Enter element at row 2, column 1: 4
Enter element at row 2, column 2: 5
Enter element at row 2, column 3: 6
Enter the elements of the second matrix:
Enter element at row 1, column 1: 7
Enter element at row 1, column 2: 8
Enter element at row 1, column 3: 9
Enter element at row 2, column 1: 10
Enter element at row 2, column 2: 11
Enter element at row 2, column 3: 12
Result Matrix (Sum of the two matrices):
8       10      12
14      16      18
