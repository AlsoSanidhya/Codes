//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
void printInitialsWithSurname(const char *name) {
    int index = 0;
    int isStartOfWord = 1; // Flag to indicate the start of a word
    int lastSpaceIndex = -1; // To track the last space index

    // First, find the last space to identify the surname
    while (name[index] != '\0') {
        if (name[index] == ' ') {
            lastSpaceIndex = index;
        }
        index++;
    }

    index = 0;
    // Print initials for all words except the last one
    while (name[index] != '\0') {
        if (isStartOfWord && name[index] != ' ') {
            // If we are at the last word, break
            if (index > lastSpaceIndex) {
                break;
            }
            // Print the initial
            printf("%c.", name[index]);
            isStartOfWord = 0; // Reset the flag
        }
        if (name[index] == ' ') {
            isStartOfWord = 1; // Next character will be the start of a new word
        }
        index++;
    }

    // Print the surname
    if (lastSpaceIndex != -1) {
        printf(" %s\n", &name[lastSpaceIndex + 1]);
    } else {
        // If there's no space, print the whole name as surname
        printf(" %s\n", name);
    }
}
int main() {
    char name[100];
    // Read the entire line including spaces
    fgets(name, sizeof(name), stdin);
    // Remove the newline character if present
    name[strcspn(name, "\n")] = 0;

    printInitialsWithSurname(name);
    return 0;
}
