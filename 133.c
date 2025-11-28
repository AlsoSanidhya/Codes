//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>

enum Month {
    JAN, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;

    // Example input — you can change it
    m = FEB;

    switch (m) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case NOV:
            printf("31 days\n");
            break;

        case APR:
        case JUN:
        case SEP:
        case DEC:
            printf("30 days\n");
            break;

        case FEB:
            printf("28 or 29 days\n");
            break;
    }

    return 0;
}
