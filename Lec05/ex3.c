#include<stdio.h>
int main(){
    int j=1;
    while(j+=2, j<=10){
        printf("%d\n", j);
    }
    printf("%d",j);
    return 0;
}