//Q50: Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>
int main() {
    int rows = 5;

    // Print the pattern
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 0; k < rows - i; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}