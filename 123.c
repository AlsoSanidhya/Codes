//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open file
    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Word counting logic
        if (!isspace(ch) && inWord == 0) {
            inWord = 1; // We entered a new word
            words++;
        }
        else if (isspace(ch)) {
            inWord = 0; // Word ended
        }
    }

    // If file doesn't end with newline, but contains text → count the last line
    if (characters > 0)
        lines++;

    fclose(fp);

    // Output
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
