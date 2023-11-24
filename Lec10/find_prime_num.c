// find all prime numbers up to a given endpoint

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

void print_prime(int a){
    printf("Prime numbers up to %d are: ", a);

    for(int i=2; i<=a; i++){
        if(is_prime(i)){
            printf("%d ", i);
        }
    }
}

int main(){
    int a;
    printf("Enter the endpoint for prime num: ");
    scanf("%d", &a);

    print_prime(a);

    return 0;
}