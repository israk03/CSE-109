// Perform the following operator: A+B-C/D

#include<stdio.h>
int main()
{
    int A, B, C, D, ans;

    printf("Please enter four number : ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    ans = A+B-C/D;

    printf("The result is : %d", ans);

    return 0; 
}