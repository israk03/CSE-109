// print from 1 to n
#include<stdio.h>

void solve(int i, int n){
    if(i>n){
        return;
    }
    printf("%d\n", i);
    solve(i+1,n);
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    solve(1, n);

    return 0;
}