// Write a C program that takes two float numbers from user and print them as output.

#include <stdio.h>

int main() {
    float number1, number2;

   
    printf("Enter the first float number: ");
    scanf("%f", &number1);

    printf("Enter the second float number: ");
    scanf("%f", &number2);

    printf("You entered the first number: %f\n", number1);
    printf("You entered the second number: %f\n", number2);

    return 0;
}