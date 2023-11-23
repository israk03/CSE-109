#include <stdio.h>

int main() {
    int num = 42;
    int* ptr; // Declaration of a pointer to an integer

    ptr = &num; // Assigning the address of 'num' to the pointer

    printf("Value of 'num': %d\n", num);
    printf("Address of 'num': %p\n", &num);
    printf("Value through pointer: %d\n", *ptr); // Dereferencing the pointer to get the value

    return 0;
}
