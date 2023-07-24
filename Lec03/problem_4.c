/* Check whether the given number is odd or even */

#include<stdio.h>
int main()
{
    int a;
    printf("Print any number: ");
    scanf("%d",&a);

    if(a%2==0){
        printf("This number is even number.");
    }
    else{
        printf("This number is odd number.");
    }
    return 0;
}