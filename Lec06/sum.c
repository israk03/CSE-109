// Program to calculate the sum of numbers (10 numbers max)
//[ If the user enters a negative number, it's not added to the result ]

#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Enter a series of numbers (enter a negative number to stop):\n");

    do {
        scanf("%d", &n);
        if (n >= 0) {
            sum += n;
        }
    } while (n >= 0);

    printf("The sum of the entered non-negative numbers is: %d\n", sum);

    return 0;
}
