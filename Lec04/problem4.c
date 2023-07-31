/* Write a C program to display the n terms of odd natural numbers and their sum. */

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("how many terms? ");
    scanf("%d", &n);

    for(i=1; i<=n; i=i+2)
    {
        printf("%d\n",i);
        sum += i;
    }
    printf("The sum is %d", sum);

    return 0;
}