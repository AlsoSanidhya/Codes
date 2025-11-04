//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
int main(){
    float princi,rate,time,si,ci;
    printf("Enter principal");
    scanf("%f",&princi);
    printf("Enter rate");
    scanf("%f",&rate);
    printf("Enter time");
    scanf("%f",&time);
    si=(princi*rate*time)/100;
    ci=princi*(pow((1+rate/100),time))-princi;
    printf("Simple Interest=%.2f, Compound Interest=%.2f",si,ci);
    return 0;
}