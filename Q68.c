//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main() {    
    int n, position;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position to delete
    printf("Enter the position to delete:\n");
    scanf("%d", &position);

    // Shift elements to the left to delete the element at the given position
    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print the updated array
    printf("Updated array:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}