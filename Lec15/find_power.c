// C program to calculate the value of x^n

#include<stdio.h>
#include<math.h>

double power(double x, int n){

    double res = 1.0;

    if(n>=0){
        for(int i=0; i<n; i++){
            res *= x;
        }
    }
    else{
        for(int i=0; i>n; i--){
            res /= x;
        }
    }

    return res;
}

int main(){
    double x;
    int n;

    printf("Enter the base: ");
    scanf("%lf", &x);

    printf("Enter the power: ");
    scanf("%d", &n);

    printf("Answer = %.2lf", power(x,n));

    return 0;
}