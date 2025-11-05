//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>
void removeVowels(char *str) {
    int readIndex = 0;
    int writeIndex = 0;

    while (str[readIndex] != '\0') {
        char ch = str[readIndex];
        // Check if the character is not a vowel
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
        readIndex++;
    }
    str[writeIndex] = '\0'; // Null-terminate the modified string
}
int main() {
    char str[100];
    scanf("%s", str);

    removeVowels(str);
    printf("%s\n", str);

    return 0;
}   