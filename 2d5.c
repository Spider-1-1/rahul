#include <stdio.h>

int main() {
    int rows, cols;

    // Get the number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Create the original matrix
    int originalMatrix[rows][cols];
    int copyMatrix[rows][cols];

    // Input values into the original matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &originalMatrix[i][j]);
        }
    }

    // Copy the elements from the original matrix to the copy matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            copyMatrix[i][j] = originalMatrix[i][j];
        }
    }

    // Display the copied matrix
    printf("Copied matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", copyMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


Output:

Enter the number of rows: 2
Enter the number of columns: 3
Enter the elements of the matrix:
1 2 3
4 5 6
Copied matrix:
1 2 3
4 5 6
