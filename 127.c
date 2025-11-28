//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    int ch;

    // Open input file
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(in);
        return 1;
    }

    // Read every character, convert to uppercase, write to output
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("File converted successfully! Check output.txt\n");

    return 0;
}
