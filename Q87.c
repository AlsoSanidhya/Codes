//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>
#include <ctype.h>
void countSpacesDigitsSpecials(const char *str, int *spaceCount, int *digitCount, int *specialCount) {
    *spaceCount = 0;
    *digitCount = 0;
    *specialCount = 0;

    int index = 0;
    while (str[index] != '\0') {
        if (isspace(str[index])) {
            (*spaceCount)++;
        } else if (isdigit(str[index])) {
            (*digitCount)++;
        } else if (!isalpha(str[index])) {
            (*specialCount)++;
        }
        index++;
    }
}
int main() {
    char str[100];
    scanf("%[^\n]s", str); // Read string with spaces

    int spaces, digits, specials;
    countSpacesDigitsSpecials(str, &spaces, &digits, &specials);

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, specials);
    return 0;
}
