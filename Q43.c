//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int number, originalNumber, sumOfFactorials = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;

    // Calculate sum of factorials of each digit
    while (number > 0) {
        int digit = number % 10;
        sumOfFactorials += factorial(digit);
        number /= 10;
    }

    // Check if the number is a strong number
    if (sumOfFactorials == originalNumber) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
