//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>
int main() {    
    int n1, n2;

    // Input size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Input elements of the first array
    printf("Enter %d elements for the first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Input elements of the second array
    printf("Enter %d elements for the second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Print merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1; i++) {
        printf("%d ", arr1[i]);
    }
    for (int i = 0; i < n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}   