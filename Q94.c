//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
void findLongestWord(const char *sentence, char *longestWord) {
    int maxLength = 0;
    int currentLength = 0;
    int startIndex = 0;
    int index = 0;

    while (1) {
        if (sentence[index] != ' ' && sentence[index] != '\0') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                // Copy the longest word found so far
                strncpy(longestWord, &sentence[startIndex], currentLength);
                longestWord[currentLength] = '\0'; // Null-terminate the string
            }
            currentLength = 0;
            startIndex = index + 1;
        }

        if (sentence[index] == '\0') {
            break;
        }
        index++;
    }
}
int main() {
    char sentence[200];
    char longestWord[100];

    // Read the entire line including spaces
    fgets(sentence, sizeof(sentence), stdin);
    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = 0;

    findLongestWord(sentence, longestWord);
    printf("%s\n", longestWord);

    return 0;
}
