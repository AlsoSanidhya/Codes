//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
void reverseString(char *str) {
    int start = 0;
    int end = 0;

    // Find the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--; // Set to last character index

    // Reverse the string in place
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[100];
    scanf("%s", str);

    reverseString(str);
    printf("%s\n", str);

    return 0;
}
