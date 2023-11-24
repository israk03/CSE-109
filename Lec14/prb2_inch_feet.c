// Program to Add Two Distances (in inch-feet system) using Structures

#include<stdio.h>
struct distance{
    int feet;
    float inch;
};

struct distance add_distance(struct distance d1, struct distance d2){
    struct distance result;

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while(result.inch>=12.0){
        result.inch -= 12.0;
        result.feet++;
    }

    return result;
}

int main(){
    struct distance dis1, dis2, sum;

    printf("Enter the first distance: \n");
    printf("Feet: ");
    scanf("%d", &dis1.feet);
    printf("Inch: ");
    scanf("%f", &dis1.inch);

    printf("Enter the second distance: \n");
    printf("Feet: ");
    scanf("%d", &dis2.feet);
    printf("Inch: ");
    scanf("%f", &dis2.inch);

    sum = add_distance(dis1, dis2);

    printf("\nSum of distance: %d feet %.2lf inch\n", sum.feet, sum.inch);

    return 0;
}