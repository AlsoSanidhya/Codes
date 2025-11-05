//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>
void maxInSubarrays(int arr[], int size, int k) {
    for (int i = 0; i <= size - k; i++) {
        int maxElement = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxElement) {
                maxElement = arr[i + j];
            }
        }
        printf("%d", maxElement);
        if (i != size - k) {
            printf(" "); // Print space between elements
        }
    }
    printf("\n");
}
int main() {
    int arr[100];
    int size, k;
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    maxInSubarrays(arr, size, k);

    return 0;
}