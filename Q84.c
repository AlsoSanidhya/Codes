//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>
void toUpperCase(char *str) {
    int index = 0;
    while (str[index] != '\0') {
        // Check if the character is lowercase
        if (str[index] >= 'a' && str[index] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[index] = str[index] - ('a' - 'A');
        }
        index++;
    }
}
int main() {
    char str[100];
    scanf("%s", str);

    toUpperCase(str);
    printf("%s\n", str);

    return 0;
}
