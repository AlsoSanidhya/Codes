//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main() {
    int num, sum = 0, remainder;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        sum += remainder;     // Add it to sum
        num /= 10;           // Remove the last digit
    }

    // Print the sum of digits
    printf("Sum of digits is: %d\n", sum);

    return 0;
}