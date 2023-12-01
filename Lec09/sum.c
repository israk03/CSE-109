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

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display the sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
