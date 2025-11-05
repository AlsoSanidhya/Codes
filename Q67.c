//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>
int main() {
    int n, position, element;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // Create an array with one extra space for the new element

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and the element to insert
    printf("Enter the position to insert and the element:\n");
    scanf("%d %d", &position, &element);

    // Shift elements to the right to make space for the new element
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = element; // Insert the new element at the given position

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}