//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
int maxSumOfSubarrays(int arr[], int size, int k) {
    if (k > size) {
        return -1; // Invalid case
    }

    int maxSum = 0;
    // Calculate sum of first k elements
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;
    // Slide the window from start to end of the array
    for (int i = k; i < size; i++) {
        currentSum += arr[i] - arr[i - k]; // Add next element and remove the first element of the previous window
        if (currentSum > maxSum) {
            maxSum = currentSum; // Update maxSum if currentSum is greater
        }
    }

    return maxSum;
}
int main() {
    int arr[100];
    int size, k;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    int result = maxSumOfSubarrays(arr, size, k);
    printf("%d\n", result);

    return 0;
}