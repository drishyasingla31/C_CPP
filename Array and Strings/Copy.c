//2. Write a program to copy one string to another using strcpy().
#include<stdio.h>
#include<string.h>
int main(){
    char s1[50]="foxes";
    char s2[50]="camels";
    strcpy(s1,s2);
    printf("s1 is %s\ns2 is %s",s1,s2);
    return 0;
}