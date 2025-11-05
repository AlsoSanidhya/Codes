//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
void reverseEachWord(char *sentence) {
    int start = 0, end = 0;

    while (1) {
        // Find the end of the current word
        while (sentence[end] != ' ' && sentence[end] != '\0') {
            end++;
        }

        // Reverse the current word
        int left = start;
        int right = end - 1;
        while (left < right) {
            char temp = sentence[left];
            sentence[left] = sentence[right];
            sentence[right] = temp;
            left++;
            right--;
        }

        // If we reached the end of the string, break
        if (sentence[end] == '\0') {
            break;
        }

        // Move to the next word
        end++; // Skip the space
        start = end;
    }
}
int main() {
    char sentence[200];

    // Read the entire line including spaces
    fgets(sentence, sizeof(sentence), stdin);
    // Remove the newline character if present
    sentence[strcspn(sentence, "\n")] = 0;

    reverseEachWord(sentence);
    printf("%s\n", sentence);

    return 0;
}
