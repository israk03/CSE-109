/* A car travelling at 30 m/s accelerates steadily at 5 m/s2 for a distance of 70 m. 
What is the final velocity of the car?

final velocity = sqrt(pow(initial velocity,2) + 2 * a * s)

*/
#include<stdio.h>
#include<math.h>

int main(){
    double initial_velo = 30.0;
    double acce = 5.0; 
    double distance = 70.0;

    double final_velo = sqrt(pow(initial_velo, 2) + (2*acce*distance));

    printf("Ans: %.2lf", final_velo);

    return 0;
}