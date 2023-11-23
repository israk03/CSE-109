// Write a Function to find Finding max

#include<stdio.h>

int max(int n1, int n2){
    if(n1 > n2){
        return n1;
    }
    else{
        return n2;
    }
}

int main(){
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    print("The maximum of these numbers: %d", max(num1, num2));

    return 0;
}