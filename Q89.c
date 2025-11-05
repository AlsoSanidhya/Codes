//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int countCharacterFrequency(const char *str, char target) {
    int count = 0;
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] == target) {
            count++;
        }
        index++;
    }

    return count;
}
int main() {
    char str[100];
    char target;

    scanf("%s", str);
    getchar(); // Consume the newline character after the string input
    scanf("%c", &target);

    int frequency = countCharacterFrequency(str, target);
    printf("%d\n", frequency);

    return 0;
}
