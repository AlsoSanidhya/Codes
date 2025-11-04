//Q28: Write a program to print the product of even numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main() {
    int n;
    long long product = 1;
    int hasEven = 0; // Flag to check if there is at least one even number

    // Input a number n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the product of even numbers from 1 to n
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        hasEven = 1; // Set flag to true if an even number is found
    }

    // Print the product or indicate no even numbers found
    if (hasEven) {
        printf("Product of even numbers from 1 to %d is: %lld\n", n, product);
    } else {
        printf("No even numbers in the range from 1 to %d\n", n);
    }

    return 0;
}