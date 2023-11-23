#include<stdio.h>

int sum(int n){
    if(n != 0){
        return n+sum(n-1);
    }
    else{
        return n;
    }
}

int main(){
    int num, res;

    printf("Enter a positive integer : ");
    scanf("%d", &num);

    res = sum(num);

    printf("Sum = %d", res);

    return 0;
}