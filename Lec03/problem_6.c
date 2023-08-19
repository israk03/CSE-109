/* Input week number and print week day */
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    if(n==1)
    {
        printf("Week day: Sunday.");
    }
    else if(n==2)
    {
        printf("Week day: Monday.");
    }
    else if(n==3)
    {
        printf("Week day: Tuesday.");

    }
    else if(n==4)
    {
        printf("Week day: Wed.");
    }
    else if(n==5)
    {
        printf("Week day: Thu.");

    }
    else if(n==6)
    {
        printf("Week day: Fri");
    }
    else if(n==7)
    {
        printf("Week day: Sat");

    }
    else{
        printf("Invalid week num");

    }
    return 0;
}