// Write a program in C to store n elements in an array and print the elements using a pointer

#include<stdio.h>

int main(){
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int* p = arr;
    printf("Elements are: ");
    for(int i=0; i<n; i++){
        printf("%d ", *(p+i));
    }

    return 0;
}