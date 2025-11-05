//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
void toggleCase(char *str) {
    int index = 0;
    while (str[index] != '\0') {
        // Check if the character is lowercase
        if (str[index] >= 'a' && str[index] <= 'z') {
            // Convert to uppercase by subtracting 32 from ASCII value
            str[index] = str[index] - ('a' - 'A');
        }
        // Check if the character is uppercase
        else if (str[index] >= 'A' && str[index] <= 'Z') {
            // Convert to lowercase by adding 32 to ASCII value
            str[index] = str[index] + ('a' - 'A');
        }
        index++;
    }
}
int main() {
    char str[100];
    scanf("%s", str);

    toggleCase(str);
    printf("%s\n", str);

    return 0;
}
