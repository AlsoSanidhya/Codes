//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <ctype.h>
void countVowelsAndConsonants(const char *str, int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;

    int index = 0;
    while (str[index] != '\0') {
        char ch = tolower(str[index]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
        index++;
    }
}
int main() {
    char str[100];
    scanf("%s", str);

    int vowels, consonants;
    countVowelsAndConsonants(str, &vowels, &consonants);

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}   