//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
int kthSmallest(int arr[], int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int pi = partition(arr, low, high);
        if (pi == k - 1) {
            return arr[pi];
        } else if (pi < k - 1) {
            low = pi + 1;
        } else {
            high = pi - 1;
        }
    }
    return -1; // This should never be reached if k is valid
}
int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);

    if (k > 0 && k <= n) {
        int kth_smallest = kthSmallest(arr, n, k);
        printf("The %dth smallest element is: %d\n", k, kth_smallest);
    } else {
        printf("Invalid value of k\n");
    }

    return 0;
}
