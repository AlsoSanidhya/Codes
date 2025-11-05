//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
#define CHAR_SET_SIZE 256
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int lastIndex[CHAR_SET_SIZE];
    for (int i = 0; i < CHAR_SET_SIZE; i++) {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }
        lastIndex[(unsigned char)s[i]] = i;
        int currentLength = i - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    return maxLength;
}
int main() {
    char s[1000];
    printf("Enter the string: ");
    scanf("%s", s);

    int length = lengthOfLongestSubstring(s);
    printf("The length of the longest substring without repeating characters is: %d\n", length);

    return 0;
}
