//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
void mergeSortedArrays(int* nums1, int size1, int* nums2, int size2, int* merged) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < size1) {
        merged[k++] = nums1[i++];
    }
    while (j < size2) {
        merged[k++] = nums2[j++];
    }
}
int main() {
    int nums1[MAX_SIZE], nums2[MAX_SIZE], merged[2 * MAX_SIZE];
    int size1, size2;
    
    // Read the size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    
    // Read the elements of the first array
    printf("Enter the elements of the first array (sorted): ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &nums1[i]);
    }
    
    // Read the size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    
    // Read the elements of the second array
    printf("Enter the elements of the second array (sorted): ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &nums2[i]);
    }
    
    mergeSortedArrays(nums1, size1, nums2, size2, merged);
    
    // Print the merged array
    printf("Merged sorted array: ");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
}
