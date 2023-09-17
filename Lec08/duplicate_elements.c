/* Write a C program to count the total number of duplicate elements in an array. */
#include <stdio.h>

int main() {
    
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

 
    for (int i = 0; i < n - 1; i++) {

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements in the array: %d\n", count);

    return 0;
}
