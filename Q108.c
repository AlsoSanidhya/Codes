//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>
void productExceptSelf(int nums[], int size, int result[]) {
    int leftProduct[size];
    int rightProduct[size];

    // Initialize left and right product arrays
    leftProduct[0] = 1;
    rightProduct[size - 1] = 1;

    // Calculate left products
    for (int i = 1; i < size; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }

    // Calculate right products
    for (int i = size - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }

    // Calculate result by multiplying left and right products
    for (int i = 0; i < size; i++) {
        result[i] = leftProduct[i] * rightProduct[i];
    }
}
int main() {
    int nums[100];
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int result[100];
    productExceptSelf(nums, size, result);

    // Print the result array
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", result[i]);
        if (i != size - 1) {
            printf(","); // Print comma between elements
        }
    }
    printf("]\n");

    return 0;
}
