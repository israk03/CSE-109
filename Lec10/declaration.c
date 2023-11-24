#include<stdio.h>

/* int max(int n1, int n2){
    int res;
    if(n1>n2){
        res = n1;
    }
    else{
        res = n2;
    }

    return res;
} */

int main(){
    int a=100;
    int b=300;
    int ans;

    ans = max(a, b);

    printf("Max value is: %d.\n", ans);
    return 0;
}

int max(int n1, int n2){
    int res;
    if(n1>n2){
        res = n1;
    }
    else{
        res = n2;
    }

    return res;
}