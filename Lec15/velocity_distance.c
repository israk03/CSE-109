/* A horse accelerates steadily from rest at 4 m/s2 for 3s.
What is its final velocity and how far has it travelled? */

// final velocity = u+at
// distance = ut + 0.5*a*t^2

#include<stdio.h>
#include<math.h>

int main(){
    double accele = 4.0;
    double time = 3;
    double initial_velo = 0;

    double final_velo = initial_velo + (accele*time);

    double distance = (initial_velo * time) + (0.5 * accele * time * time);

    printf("final velocity: %.2lf m/s\n", final_velo);
    printf("distance: %.2lf m.", distance);

    return 0;
}