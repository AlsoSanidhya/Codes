//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main() {
    int num1, num2, hcf, i;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF using brute-force method
    hcf = 1; // Initialize HCF to 1
    for (i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i; // Update HCF if i divides both numbers
        }
    }

    // Print the HCF
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}