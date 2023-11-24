// Write a Function to find sum of first 10 odd integers.

#include<stdio.h>

int sum(int n){
    int s = 0;
    for(int i=1; i<=n; i=i+2){
        s += i;
    }
    return s;
}

int main(){
    int num = 10;
    //printf("Enter a positive integer: ");
    //scanf("%d", &num);

    printf("Sum of the first %d odd integers = %d", num, sum(num));

    return 0;
}