#include<stdio.h>

struct student{
    char name[40];
    int roll;
    int mark;
};

void print_stu(int n, struct student s){
    printf("Info of student %d\n", n);
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Mark: %d\n", s.mark);

    printf("\n\n");
}

int main(){
    struct student cls[5];

    for(int i=1; i<=5; i++){
        printf("Enter the name: ");
        scanf("%s", cls[i].name);
        printf("Enter the roll: ");
        scanf("%d", &cls[i].roll);
        printf("Enter the mark: ");
        scanf("%d", &cls[i].mark);
    }

    for(int i=1; i<=5; i++){
        print_stu(i, cls[i]);
    }

    return 0;
}