#include <stdio.h>

struct Student {
    int id;
    char name[50];
};

int main() {
    FILE *fp;
    struct Student s1 = {1, "Simran"}, s2;

    fp = fopen("data.bin", "wb");
    fwrite(&s1, sizeof(s1), 1, fp);
    fclose(fp);

    fp = fopen("data.bin", "rb");
    fread(&s2, sizeof(s2), 1, fp);
    fclose(fp);

    if (fp == NULL) {
        printf("File not opened\n");
        return 0;
    }
    printf("ID: %d\n", s2.id);
    printf("Name: %s\n", s2.name);
    return 0;
}