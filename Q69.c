//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int main() {
    int n;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int firstLargest = -2147483648; // Initialize to minimum integer value
    int secondLargest = -2147483648; // Initialize to minimum integer value

    // Find the largest and second largest elements
    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    // Print the second largest element
    if (secondLargest == -2147483648) {
        printf("No second largest element\n");
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}