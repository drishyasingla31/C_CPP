//3. Write a program to concatenate two strings using strcat().
#include<stdio.h>
#include<string.h>
int main(){
    char s1[50]="my ";
    char s2[50]="name";
    strcat(s1,s2);
    printf("new s1 is %s",s1);
    return 0;
}