//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int findMissingNumber(int* nums, int numsSize) {
    int total = numsSize * (numsSize + 1) / 2;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    return total - sum;
}
int main() {
    int nums[MAX_SIZE];
    int numsSize;
    
    // Read the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &numsSize);
    
    // Read the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    
    int missingNumber = findMissingNumber(nums, numsSize);
    
    // Print the missing number
    printf("%d\n", missingNumber);
    
    return 0;
}
