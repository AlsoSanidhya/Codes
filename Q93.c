//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool areAnagrams(const char *str1, const char *str2) {
    int freq[26] = {0}; // Frequency array for lowercase letters

    // Count frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[str1[i] - 'a']++;
    }

    // Decrease frequency based on characters in str2
    for (int i = 0; str2[i] != '\0'; i++) {
        freq[str2[i] - 'a']--;
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            return false; // Not anagrams
        }
    }

    return true; // Are anagrams
}
int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}
