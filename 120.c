//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    // Input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Capitalize first character if it's a letter
    if (str[0] != '\0' && isalpha(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Traverse entire string
    for (i = 1; str[i] != '\0'; i++) {

        // If previous character is space and current is alphabet → Capitalize
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Otherwise lowercase (optional, but keeps proper formatting)
        else {
            str[i] = tolower(str[i]);
        }
    }

    // Output
    printf("Sentence Case: %s", str);

    return 0;
}
