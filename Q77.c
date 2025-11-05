//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>
#include <stdbool.h>
bool areDiagonalElementsDistinct(int rows, int cols) {
    if (rows != cols) {
        return false; // Diagonal elements are only defined for square matrices
    }

    int matrix[rows][cols];
    bool seen[1000] = { false }; // Assuming matrix elements are in the range 0-999

    // Read the matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check diagonal elements for distinctness
    for (int i = 0; i < rows; i++) {
        int diagElement = matrix[i][i];
        if (seen[diagElement]) {
            return false; // Duplicate found
        }
        seen[diagElement] = true;
    }

    return true;
}
int main() {
    int n;
    scanf("%d", &n);

    bool result = areDiagonalElementsDistinct(n, n);
    if (result) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}