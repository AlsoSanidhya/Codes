//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int findDuplicate(int* nums, int numsSize) {
    int seen[MAX_SIZE] = {0};
    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i];
        }
        seen[nums[i]] = 1;
    }
    return -1; // This line should never be reached if input is valid
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
    
    int duplicate = findDuplicate(nums, numsSize);
    
    // Print the duplicate number
    printf("%d\n", duplicate);
    
    return 0;
}
