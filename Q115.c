//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>
#define CHAR_SET_SIZE 26
int areAnagrams(char *s, char *t) {
    int countS[CHAR_SET_SIZE] = {0};
    int countT[CHAR_SET_SIZE] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        countS[s[i] - 'a']++;
    }
    for (int i = 0; t[i] != '\0'; i++) {
        countT[t[i] - 'a']++;
    }

    for (int i = 0; i < CHAR_SET_SIZE; i++) {
        if (countS[i] != countT[i]) {
            return 0; // Not an anagram
        }
    }
    return 1; // Anagram
}
int main() {
    char s[1000], t[1000];
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);

    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
