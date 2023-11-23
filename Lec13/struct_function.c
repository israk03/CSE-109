#include<stdio.h>
#include<string.h>

struct person{
    char name[20];
    int age; 
    int salary;
};

void display(struct person p){
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %d\n", p.salary);
}

int main(){
    struct person p1;
    strcpy(p1.name, "Israk");
    p1.age = 21;
    p1.salary = 20000;

    display(p1);

    return 0;
}