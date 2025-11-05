//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
void addMatrices(int rows, int cols) {
    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int sumMatrix[rows][cols];

    // Read the first matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Read the second matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Print the resulting sum matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    addMatrices(rows, cols);
    return 0;
}   