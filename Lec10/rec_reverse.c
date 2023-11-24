// print reverse order etate prb asey

#include<stdio.h>

void solve(int i, int n){
    if(i>n){
        return;
    }
    solve(i+1,n);
    printf("%d\n", n);

}

int main(){
    int n;
    scanf("%d", &n);

    solve(1, n);

    return 0;
}