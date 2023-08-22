/* C program to count number of digit in an integer */

#include<stdio.h>
int main(){
    long long num;
    int count=0;

    printf("enter any nymber: ");
    scanf("%lld", &num);

    while(num!=0){
        count++;
        num/=10;
    }
    printf("Total digit: %d.", count);
    return 0;
}