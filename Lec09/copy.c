#include<stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the array size: ");
    scanf("%d", &n);

    // Declare the source array and destination array
    int sourceArray[n], destinationArray[n];

    // Input elements into the source array
    printf("Enter %d elements for the source array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copy elements from the source array to the destination array
    for (int i = 0; i < n; i++) {
        destinationArray[i] = sourceArray[i];
    }

    // Display the contents of the source array
    printf("Source array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sourceArray[i]);
    }

    // Display the contents of the destination array
    printf("\nCopied array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}
