//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>
#include <stdbool.h>
bool isSymmetric(int rows, int cols) {
    if (rows != cols) {
        return false; // A non-square matrix cannot be symmetric
    }

    int matrix[rows][cols];

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }

    return true;
}
int main() {
    int n;
    scanf("%d", &n);

    bool result = isSymmetric(n, n);
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}