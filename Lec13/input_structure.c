#include<stdio.h>
#include<string.h>

struct Person{
    int age;
    int salary;
};

int main(){
    struct Person p;

    printf("Enter the info: \n");

    printf("Enter the age: ");
    scanf("%d", &p.age);
    printf("Enter the salary: ");
    scanf("%d", &p.salary);

    printf("Age: %d\nSalary: %d\n", p.age, p.salary);

    return 0;
}