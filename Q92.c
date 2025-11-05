//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
char firstRepeatingLowercaseChar(const char *str) {
    int freq[26] = {0}; // Frequency array for lowercase letters

    int index = 0;
    while (str[index] != '\0') {
        char ch = str[index];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                return ch; // Return the first repeating character
            }
        }
        index++;
    }

    return '\0'; // Indicate no repeating character found
}
int main() {
    char str[100];
    scanf("%s", str);

    char result = firstRepeatingLowercaseChar(str);
    if (result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating lowercase character found\n");
    }

    return 0;
}
