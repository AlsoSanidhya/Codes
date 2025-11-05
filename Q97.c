//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
void printInitials(const char *name) {
    int index = 0;
    int isStartOfWord = 1; // Flag to indicate the start of a word

    while (name[index] != '\0') {
        if (isStartOfWord && name[index] != ' ') {
            // Print the initial
            printf("%c.", name[index]);
            isStartOfWord = 0; // Reset the flag
        }
        if (name[index] == ' ') {
            isStartOfWord = 1; // Next character will be the start of a new word
        }
        index++;
    }
    printf("\n");
}
int main() {
    char name[100];
    // Read the entire line including spaces
    fgets(name, sizeof(name), stdin);
    // Remove the newline character if present
    name[strcspn(name, "\n")] = 0;

    printInitials(name);
    return 0;
}
