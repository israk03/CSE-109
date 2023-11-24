// Program to calculate the sum of n numbers entered by the user using structure and pointers

#include<stdio.h>
#include<stdlib.h>

struct Numbers{
    int *arr;
    int size;
};

int calculate(struct Numbers *nums){
    int sum = 0;
    
    for(int i= 0; i<nums->size; i++){
        sum += nums -> arr[i];
    }

    return sum;
}

int main(){
    struct Numbers user_num;

    printf("Enter the number of elements: ");
    scanf("%d", &user_num.size);

    user_num.arr = (int *)malloc(user_num.size * sizeof(int));

    printf("Enter elements: ");
    for(int i=0; i<user_num.size; i++){
        scanf("%d", &user_num.arr[i]);
    }

    int summ = calculate(&user_num);

    printf("SUM = %d", summ);

    free(user_num.arr);

    return 0;
}