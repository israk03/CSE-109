// Add two numbers given by user and print the result.

#include<stdio.h>
int main()
{
    int a, b, ans;

    printf("Please enter two interger number: ");
    scanf("%d %d", &a, &b);

    ans = a+b;

    printf("The result is %d", ans);

    return 0;
}