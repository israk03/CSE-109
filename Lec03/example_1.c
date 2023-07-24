/* Checking for a positive number */

#include<stdio.h>
void main()
{
	int a;
	printf("Please enter any number: ");
	scanf("%d", &a);
	
	if(a>0)
	{
		printf("Entered number %d is positive.\n");
	}
}