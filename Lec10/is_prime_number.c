// Write a Function to find if the num is prime number or not

#include<stdio.h>
#include<stdbool.h>

bool is_prime(int num){
    if(num <= 1){
        return false;
    }

    for(int i=2; i*i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);

    if(is_prime(n)){
        printf("%d is a prime.", n);
    
    }
    else{
        printf("%d is not a prime.", n);
    }

    return 0;
}