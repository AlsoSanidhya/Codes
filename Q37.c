//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>
int main() {
    int num1, num2, hcf, lcm, i;

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

    // Calculate LCM using the relation LCM * HCF = num1 * num2
    lcm = (num1 * num2) / hcf;

    // Print the LCM
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}