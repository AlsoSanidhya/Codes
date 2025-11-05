//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
#include <stdio.h>
void printCharactersOnNewLine(const char *str) {
    int index = 0;
    while (str[index] != '\0') {
        printf("%c\n", str[index]);
        index++;
    }
}
int main() {
    char str[100];
    scanf("%s", str);
    printCharactersOnNewLine(str);
    return 0;
}
