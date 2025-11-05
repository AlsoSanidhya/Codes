//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
void changeDateFormat(const char *inputDate, char *outputDate) {
    // Extract day, month, and year from the input date
    char day[3], month[3], year[5];
    sscanf(inputDate, "%2s/%2s/%4s", day, month, year);

    // Map month number to month abbreviation
    const char *monthAbbreviation = "Apr"; // Since the month is always 04

    // Format the output date
    sprintf(outputDate, "%s-%s-%s", day, monthAbbreviation, year);
}
int main() {
    char inputDate[11]; // Format: dd/04/yyyy
    char outputDate[15]; // Format: dd-Apr-yyyy

    // Read the input date
    scanf("%s", inputDate);

    changeDateFormat(inputDate, outputDate);
    printf("%s\n", outputDate);

    return 0;
}
