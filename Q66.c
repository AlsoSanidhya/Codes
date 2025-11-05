//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>
int main() {
    int n, element;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    // Input elements of the sorted array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position to insert the new element
    int i;
    for (i = n - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i]; // Shift elements to the right
    }
    arr[i + 1] = element; // Insert the new element

    // Print the updated array
    printf("Updated array:\n");
    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}