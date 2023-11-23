// Write a program in C to find the maximum number between two numbers using a pointer.

#include<stdio.h>

int find_max(int* a, int* b){
    if(*a > *b){
        return *a;
    }
    else{
        return *b;
    }
}

int main(){
    int n1, n2;
    printf("Enter two integer number: ");
    scanf("%d %d", &n1, &n2);

    printf("The maximum of these numbers = %d", find_max(&n1, &n2));

    return 0;
}