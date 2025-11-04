//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>
#include <string.h>
int main() {
    char binary[65]; // Array to hold binary number as string
    char onesComplement[65]; // Array to hold 1's complement

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Calculate 1's complement
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else {
            printf("Invalid binary number!\n");
            return 1; // Exit if input is not a valid binary number
        }
    }
    onesComplement[length] = '\0'; // Null-terminate the string

    // Print the 1's complement
    printf("1's complement is: %s\n", onesComplement);

    return 0;
}