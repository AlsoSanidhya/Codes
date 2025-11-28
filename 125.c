//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take filename input
    printf("Enter the filename: ");
    scanf("%s", filename);
    getchar(); // To clear newline left by scanf

    // Open file in append mode
    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

    // Take new line of text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text to file
    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}
