// Write a Function to find sum of n integers

#include<stdio.h>

int sum(int n){
    int s = 0;
    for(int i=0; i<n; i++){
        s += i;
    }
    return s;
}

int main(){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Sum of the first %d integers = %d", num, sum(num));

    return 0;
}