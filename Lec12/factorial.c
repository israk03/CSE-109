// Write a program in C to find the factorial of a given number using pointers.

#include<stdio.h>

int fact(int* n){
    int res = 1;

    for(int i=1; i<=*n; i++){
        res *= i;
    }
    return res;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d", fact(&num));

    return 0;
}