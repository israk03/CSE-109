/* C program to check whether a number is
palindrome or not */

#include<stdio.h>
int main(){
    int n, num, rev = 0;

    printf("Please enter a number: ");
    scanf("%d", &n);

    num = n;

    while(n!=0){
        rev = (rev*10) + (n%10);
        n/=10;
    }
    if(num=rev){
        printf("%d is palindrome.", num);
    }
    else{
        printf("%d is not palindrome.", num);
    }
    return 0;
}