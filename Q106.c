// Q106: Find Next Greater Element for each element in the array using brute force approach.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input size of array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input array elements
    }

    // Brute force approach
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;  // stop when first greater element found
            }
        }
        printf("%d", nextGreater);
        if (i != n - 1)
            printf(", ");  // print comma between elements
    }

    return 0;
}
