// Write a Function to check Factorial

#include<stdio.h>

long long fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<0){
        printf("Non defined.");
    }
    else{
        printf("Factorial of %d = %lld\n", num, fact(num));
    }

    return 0;
}