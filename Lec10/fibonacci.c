// Write a Function to find Fibonacci Series

#include<stdio.h>

void generate_fibonacci(int n){
    int f = 0;
    int s = 1; 
    int next;

    printf("Fibonacci series up to %d terms are: ", n);

    for(int i=0; i<=n; i++){
        printf("%d, ", f);

        next = f + s;
        f = s;
        s = next;
    }

    printf("\n");
}

int main(){
    int a;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &a);

    generate_fibonacci(a);

    return 0;
}