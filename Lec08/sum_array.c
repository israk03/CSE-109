/* Write a C program to find the sum of all elements in array. */

#include<stdio.h>
int main(){
    int n; 
    printf("Please enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Please enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    printf("The sum of these elements is : %d.", sum);

    return 0;

}