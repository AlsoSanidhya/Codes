//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>
int main() {
    int number;
    int digitCount[10] = {0}; // Array to store count of each digit (0-9)

    // Input number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Count occurrences of each digit
    while (number > 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    // Find the digit with the maximum count
    int maxCount = 0;
    int mostFrequentDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    // Print the most frequent digit
    printf("%d\n", mostFrequentDigit);

    return 0;
}