#include<stdio.h>
#include<string.h>

struct Person{
    char name[50];
    int age; 
    int salary;
};

int main(){
    struct Person p = {"Israk", 21, 20000};

    printf("Name: %s\nAge: %d\nSalary: %d", p.name, p.age, p.salary);

    return 0;
}