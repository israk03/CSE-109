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

    // Display array elements in reverse order
    printf("Array elements in reverse order are: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
