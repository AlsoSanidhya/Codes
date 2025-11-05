//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>
int main() {
    int number, sumOfDivisors = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate sum of proper divisors
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sumOfDivisors += i;
        }
    }

    // Check if the number is a perfect number
    if (sumOfDivisors == number) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }

    return 0;
}