#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int age; 
    int salary;
};

int main(){
    struct Person p[3];

    for(int i=1; i<=3; i++){
        printf("Enter info for person %d: \n", i);

        printf("Enter your name: ");
        gets(p[i].name);

        printf("Enter your age: ");
        scanf("%d", &p[i].age);

        printf("Enter your salary: ");
        scanf("%d", &p[i].salary);

        printf("\n\n");
    }

    for(int i=1; i<=3; i++){
        printf("Info for person %d: \n", i);

        printf("Name: %s", p[i].name);
        printf("Age: %d", p[i].age);
        printf("Salary: %d", p[i].salary);

        printf("\n\n");
    }

    return 0;
}