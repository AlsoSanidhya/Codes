//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include <stdio.h>
int main() {
    int num, remainder;
    int product = 1;
    int hasOdd = 0; // Flag to check if there are any odd digits

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the product of odd digits
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        if (remainder % 2 != 0) { // Check if the digit is odd
            product *= remainder; // Multiply to product
            hasOdd = 1; // Set flag to true
        }
        num /= 10; // Remove the last digit
    }

    // If no odd digits were found, product remains 1
    if (!hasOdd) {
        product = 1;
    }

    // Print the product of odd digits
    printf("Product of odd digits is: %d\n", product);

    return 0;
}