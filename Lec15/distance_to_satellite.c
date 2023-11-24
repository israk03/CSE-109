// Distance of a Geostationary Satellite

#include<stdio.h>
#include<math.h>

int main(){
    double roe = 6371.0; // roe = radius of earth
    double sh; // sh = satellite height
    printf("Enter the height of the geostationary satellite above the earth surface: ");
    scanf("%lf", &sh);

    double distance = roe * sqrt(1 + pow(sh / roe, 2));

    printf("The distance to the geostationary satellite is %.2lf km.\n", distance);

    return 0;
}