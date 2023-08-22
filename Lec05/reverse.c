/* C program to find reverse of a num */

#include<stdio.h>
int main(){
    int n, reverse=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while(n!=0){
        reverse = (reverse*10) + (n%10);
        n /= 10;
    }
    printf("Reverse: %d", reverse);
    return 0;
}