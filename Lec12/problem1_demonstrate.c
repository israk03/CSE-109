// Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.

#include<stdio.h>
int main(){
    int n = 75;
    int* p;
    
    p = &n;

    printf("Value of n = %d\n", n);
    printf("Address of n = %p\n", &n);

    printf("Value of n through pointer = %d\n", *p);

    *p = 57;
    printf("Modified value of n = %d", n);

    return 0;
}