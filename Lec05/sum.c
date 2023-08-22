/* C program to find sum of 
natural numbers from 1 to n */

#include<stdio.h>
int main(){
    int n, sum=0, i=1;
    printf("Enter a num: ");
    scanf("%d", &n);

    while(i<=n){
        sum += i;
        i++;
    }
    printf("Sum = %d.", sum);
    return 0;
}