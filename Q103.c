//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
#include <stdio.h>
int findPivotIndex(int nums[], int size) {
    int totalSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    for (int i = 0; i < size; i++) {
        totalSum -= nums[i]; // Now totalSum is the right sum for index i

        if (leftSum == totalSum) {
            return i; // Pivot index found
        }

        leftSum += nums[i];
    }

    return -1; // No pivot index found
}
int main() {
    int nums[100];
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findPivotIndex(nums, size);
    printf("%d\n", result);

    return 0;
}
