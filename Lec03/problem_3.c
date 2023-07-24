/* Check whether a number is divisible by 5 and 11 or not. */

#include<stdio.h>
int main()
{
    int a; 
    printf("Please enter any number: ");
    scanf("%d", &a);

    if(a % 5 == 0 && a % 11 == 0)
    {
        printf("Entered number is divisible by 5 and 11.");
    }
    else
    {
        printf("Entered number is not divisible by 5 and 11.");
    }

    return 0;
}