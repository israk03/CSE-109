/* Program to calculate the sum of first n natural numbers
Positive integers 1,2,3...n are known as natural numbers  */

#include<stdio.h>
int main()
{
	int n, count, sum = 0;
	printf("please enter positive integer: ");
	scanf("%d", &n);
	
	for(count = 1; count <= n; count++)
	{
		sum += count;
	}
	printf("Sum = %d", sum);
	
	return 0;
}