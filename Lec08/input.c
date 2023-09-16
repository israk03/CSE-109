/* Program to take 5 values from user and store them in an array */

#include<stdio.h>
int main(){
    int i, num[5];
    printf(“Enter 5 numbers\n”);

    for( i=0; i <5 ; i++){
    scanf(“%d”, &num[i]);
    }

    for( i=0; i <5 ; i++){
    printf(“%d\n”, num[i]);
    }

    return 0;
}