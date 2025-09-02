//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
    int num1,num2,sum,diff,product,quotient;
    printf("Enter First Number:");
    scanf("%d",&num1);
    printf("Enter Second Number:");
    scanf("%d",&num2);
    sum=num1+num2;// Calculate sum
    diff=num1-num2;// Calculate difference
    product=num1*num2;// Calculate product
    quotient=num1/num2;// Calculate quotient
    printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n",sum,diff,product,quotient);
    return 0;
}

