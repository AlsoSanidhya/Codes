//Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Check if lengths are equal
    if (len1 != len2) {
        return false;
    }

    // Create a new string by concatenating str1 with itself
    char concat[2 * len1 + 1];
    strcpy(concat, str1);
    strcat(concat, str1);

    // Check if str2 is a substring of the concatenated string
    return strstr(concat, str2) != NULL;
}
int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
