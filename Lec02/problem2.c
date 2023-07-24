/* How to take character input? How to print them? */

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("You entered: %c\n", ch);

    return 0;
}