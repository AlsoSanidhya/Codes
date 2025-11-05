//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>
void printAllSubstrings(const char *str) {
    int length = strlen(str);

    for (int start = 0; start < length; start++) {
        for (int end = start; end < length; end++) {
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf(","); // Print comma after each substring
        }
    }
    printf("\n");
}
int main() {
    char str[100];
    scanf("%s", str);

    printAllSubstrings(str);
    return 0;
}
