//1. Write a program to count the length of a string using strlen().
#include<stdio.h>
#include<string.h>
int main(){
    char str[30]="setup";
    //scanf("%s",&str);
    printf("length of %s is %d",str,strlen(str));
    return 0;
}