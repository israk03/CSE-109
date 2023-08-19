/* Write a program in C to read 10 numbers from the keyboard and find their sum and average. */

#include<stdio.h>
int main()
{
    int i, a, sum, avg;
    printf("give 10 numbers\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &a);
        sum += a;
    }
    avg = sum/10;
    printf("%d\n", sum);
    printf("%d", avg);
    return 0;
}