//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    int number, firstDigit, lastDigit, numDigits, powerOfTen, middlePart, swappedNumber;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Extract last digit
    lastDigit = number % 10;

    // Find the first digit and number of digits
    firstDigit = number;
    numDigits = 0;
    while (firstDigit >= 10) {
        firstDigit /= 10;
        numDigits++;
    }
    numDigits++; // To account for the last digit

    // Calculate power of ten for the position of the first digit
    powerOfTen = 1;
    for (int i = 1; i < numDigits; i++) {
        powerOfTen *= 10;
    }

    // Extract the middle part of the number
    middlePart = (number % powerOfTen) / 10;

    // Form the new number by swapping first and last digits
    swappedNumber = lastDigit * powerOfTen + middlePart * 10 + firstDigit;

    // Print the swapped number
    printf("Number after swapping first and last digits: %d\n", swappedNumber);

    return 0;
}