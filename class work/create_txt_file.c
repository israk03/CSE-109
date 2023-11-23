// write a c code to create a text file and write your id number via code
#include <stdio.h>
int main() {
    
    int id = 222262038;

    const char* fileName = "id.txt";

    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Error");
        return 1;
    }

    fprintf(file, "%d", id);

    fclose(file);

    printf("ID number has been written to %s\n", fileName);

    return 0;
}
