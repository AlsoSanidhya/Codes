//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main() {
    int n, sum = 0;

    // Input a number n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate the sum of the first n odd numbers
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1);
    }

    // Print the sum
    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}