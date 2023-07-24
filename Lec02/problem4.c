/* How to print out the precious of a double operator?  */

#include <stdio.h>

int main() {
    double myDouble = 3.141592653589793;

    // Printing with default precision (6 decimal places)
    printf("Default precision: %lf\n", myDouble);

    // Printing with 2 decimal places
    printf("Two decimal places: %.2lf\n", myDouble);

    // Printing with 8 decimal places
    printf("Eight decimal places: %.8lf\n", myDouble);

    return 0;
}