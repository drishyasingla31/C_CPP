#include <stdio.h>

int main() {
    FILE *fp;
    int id;
    char name[50];

   /* fp = fopen("student.txt", "w");
    fprintf(fp, "%d %s", 101, "Rahul");
    fclose(fp);*/

    fp = fopen("student.txt", "r");
    fscanf(fp, "%d %s", &id, name);
    fclose(fp);

    printf("ID: %d, Name: %s\n", id, name);

    return 0;
}
