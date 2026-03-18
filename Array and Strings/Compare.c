//4. Write a program to compare two strings using strcmp().
#include<stdio.h>
#include<string.h>
int main(){
    char s1[50]="Drishya";
    char s2[50]="Deepshika";
    if(strcmp(s1,s2)==0)
        printf("equal");
    else
        printf("unequal");
    return 0;
}