#include <stdio.h>
#include <string.h>

struct dr
{
    int roll;
    char name[50];
    int age;
    float height;
};

int main()
{
    struct dr d1;
    printf("Enter the roll no.");
    scanf("%d", &d1.roll);
    printf("Enter the name:");
    scanf("%s", d1.name);
    printf("Enter the age:");
    scanf("%d", &d1.age);
    printf("Enter the height:");
    scanf("%f", &d1.height);
    printf("Roll no.:%d\n", d1.roll);
    printf("Name:%s\n", d1.name);
    printf("Age:%d\n", d1.age);
    printf("Height:%f\n", d1.height);
    return 0;
}