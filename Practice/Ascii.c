#include<stdio.h>

int main(){
    char c;
    printf("enter character: \n");
    scanf("%c",&c);
    int val;
    val=c;
    printf("ascii value of %c is %d.",c,val);
    return 0;
}