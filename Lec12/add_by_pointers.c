// Write a program in C to add two numbers using pointers.

#include<stdio.h>

int addd(int* a, int* b){
    int result = *a + *b;
    return result;
}

int main(){
    int n1, n2;

    printf("Enter two numbers : ");
    scanf("%d %d", &n1, &n2);

    printf("The sum of these two number = %d", addd(&n1, &n2));

    return 0;
}