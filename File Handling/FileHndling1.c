#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("test.txt", "a");

    if (fp == NULL) {
        printf("File not opened\n");
        return 0;
    }

    fprintf(fp, "Hello File!\n");

    fclose(fp);

    printf("File created successfully\n");

    return 0;
}