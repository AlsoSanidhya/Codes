//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>
#include <limits.h>
int maxSubArraySum(int arr[], int n) {
    int max_so_far = INT_MIN;
    int max_ending_here = 0;

    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
    }

    // If all elements are negative, find the largest element
    if (max_so_far < 0) {
        max_so_far = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > max_so_far) {
                max_so_far = arr[i];
            }
        }
    }

    return max_so_far;
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubArraySum(arr, n);
    printf("The maximum sum of contiguous subarray is: %d\n", max_sum);

    return 0;
}
