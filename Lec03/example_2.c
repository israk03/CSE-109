/* Checking for a positive number or negative number */

#include<stdio.h>

void main()
{
  int a;
  printf("Enter any number: \n");
  scanf("%d", &a);

  if( a > 0)
	{
    printf("Entered number %d is positive \n",a);
  }

  else
	{
    printf(“Entered number %d is negative \n”,a);
  }
}