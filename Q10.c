//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
    int totalsec,hours,min,sec;
    printf("enter time in seconds");
    scanf("%d",&totalsec);
    hours=totalsec/3600;
    min=(totalsec%3600)/60;
    sec=totalsec%60;
    printf("%d:%d:%d",hours,min,sec);
    return 0;
}