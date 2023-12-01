#include<stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the array size: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Find the maximum and minimum elements in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Display the maximum and minimum elements
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
