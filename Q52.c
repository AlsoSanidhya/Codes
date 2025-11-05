//Q52: Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*



/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>
int main() {
    int rows = 5;

    // Print the pattern
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers
        for (int k = rows - i + 1; k <= rows; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}