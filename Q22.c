//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

    // Input cost price and selling price
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit %.2f%%\n", percentage);
    }
    else if (costPrice > sellingPrice) {
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss %.2f%%\n", percentage);
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}