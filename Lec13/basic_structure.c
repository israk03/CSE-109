#include<stdio.h>
#include<string.h>

struct Person{
    char name[50];
    int age; 
    int salary;
};

int main(){
    struct Person person1, person2;

    strcpy(person1.name, "Israk Chowdhury");
    person1.age = 21;
    person1.salary = 10;

    strcpy(person2.name, "Samiha Rafiq");
    person2.age = 23;
    person2.salary = 10000;

    printf("Info for person 1: \n");
    printf("Name  : %s\n", person1.name);
    printf("Age   : %d\n", person1.age);
    printf("Salary: %d\n", person1.salary);
    printf("\n\n");

    printf("Info for person 2: \n");
    printf("Name  : %s\n", person2.name);
    printf("Age   : %d\n", person2.age);
    printf("Salary: %d\n", person2.salary);
    printf("\n\n");

    return 0;
}