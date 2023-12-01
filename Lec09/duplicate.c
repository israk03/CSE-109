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

    // Count the total number of duplicate elements
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; // Break to avoid counting the same element multiple times
            }
        }
    }

    // Display the total number of duplicate elements
    printf("Total number of duplicate elements: %d\n", count);

    return 0;
}
