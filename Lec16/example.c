#include<stdio.h>
int main(){
    FILE *file;
    char name[30];
    int age, roll, num;

    file = fopen("input.txt", "a");
    if(file == NULL){
        printf("File not found.");
    }
    else{
        printf("File is open.\n");

        printf("Enter number od students: ");
        scanf("%d", &num);

        for(int i=1; i<=num; i++){
            printf("Enter your name: ");
            scanf("%s", name);

            printf("Enter your age: ");
            scanf("%d", &age);

            printf("Enter your roll: ");
            scanf("%d", &roll);

            fprintf(file, "\n%s\t%d\t%d\n", name, age, roll);
        }
    }

    fclose(file);
    return 0;
}