#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float salary;
};

int main() {
    struct Person employee;     // Declare a structure variable
    struct Person* ptrPerson;   // Declare a structure pointer

    ptrPerson = &employee;      // Assign the address of the structure variable to the pointer

    // Input using structure variable
    printf("Enter name: ");
    scanf("%s", employee.name);

    printf("Enter age: ");
    scanf("%d", &employee.age);

    printf("Enter salary: ");
    scanf("%f", &employee.salary);

    // Output using structure pointer
    printf("\nDetails using pointer:\n");
    printf("Name: %s\n", ptrPerson->name);
    printf("Age: %d\n", ptrPerson->age);
    printf("Salary: %.2f\n", ptrPerson->salary);

    return 0;
}
