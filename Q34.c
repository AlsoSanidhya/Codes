//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main() {
    int num, i, isPrime = 1;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for prime number
    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor, not prime
                break;
            }
        }
    }

    // Print result
    if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}