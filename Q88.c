//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
void replaceSpacesWithHyphens(char *str) {
    int index = 0;
    while (str[index] != '\0') {
        if (str[index] == ' ') {
            str[index] = '-';
        }
        index++;
    }
}
int main() {
    char str[100];
    scanf("%[^\n]s", str); // Read string with spaces

    replaceSpacesWithHyphens(str);
    printf("%s\n", str);

    return 0;
}   