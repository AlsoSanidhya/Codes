//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
void firstNegativeInSubarrays(int arr[], int size, int k) {
    for (int i = 0; i <= size - k; i++) {
        int firstNegative = 0; // Default to 0 if no negative found
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNegative = arr[i + j];
                break; // Stop at the first negative integer
            }
        }
        printf("%d", firstNegative);
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

    firstNegativeInSubarrays(arr, size, k);

    return 0;
}
