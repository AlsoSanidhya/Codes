//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include <stdio.h>
int main() {
    int n;
    long long factorial = 1;

    // Input a number n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate factorial
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is: %lld\n", n, factorial);
    }

    return 0;
}