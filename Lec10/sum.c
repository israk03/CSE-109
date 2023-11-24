// Write a Function to find sum of n integers

#include<stdio.h>

int sum(int n){
    int s = 0;
    for(int i=1; i<=n; i++){
        s += i;
    }
    return s;
}

int main(){
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int summ = sum(num);
    printf("Sum of the first %d integers = %d", num, summ);

    return 0;
}