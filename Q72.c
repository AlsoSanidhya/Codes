//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>
int sumOfMatrixElements(int rows, int cols) {
    int matrix[rows][cols];
    int sum = 0;

    // Read the matrix elements and calculate the sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    return sum;
}
int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int totalSum = sumOfMatrixElements(rows, cols);
    printf("%d\n", totalSum);
    return 0;
}