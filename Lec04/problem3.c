/* Write a program in C to display the cube of the number up to an integer. */
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Cubes of numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        int cube = i * i * i;
        printf("Cube of %d: %d\n", i, cube);
    }

    return 0;
}